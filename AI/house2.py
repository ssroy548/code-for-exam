# -*- coding: utf-8 -*-
"""
Created on Sat Sep 21 23:42:28 2019

@author: SSROY
"""

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd


dataset = pd.read_csv('housing.csv')
X= dataset.iloc[:,range(13)].values
y=dataset.iloc[:,13].values

features = dataset.drop('MEDV', axis = 1)
prices = dataset['MEDV']
plt.scatter(features['RM'],prices,color='red')
plt.show()

# Splitting the dataset into the Training set and Test set
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 1/3, random_state = 0)

# Fitting Simple Linear Regression to the Training set
from sklearn.linear_model import LinearRegression
regressor = LinearRegression()
regressor.fit(X_train, y_train)

#predicting the test set result
y_pred = regressor.predict(X_test)
#regressor.predict([[]])
#accuarcy
accuracy = regressor.score(X_test,y_test)
print(accuracy*100,'%')

#actual value vs predicted value
df = pd.DataFrame({'Actual': y_test, 'Predicted': y_pred})
print(df)

#the mean squared error
print("Mean squared error: %.2f" %np.mean((regressor.predict(X_test)-y_test)**2))
#explained varience score
print("variance score: %.2f" %regressor.score(X_test,y_test))

#regressor.conf_
#regressor.intercept_

from sklearn import metrics
print(metrics.mean_absolute_error(y_test,y_pred))

print(metrics.mean_squared_error(y_test,y_pred))

print(np.sqrt(metrics.mean_absolute_error(y_test,y_pred)))

from sklearn.metrics import r2_score
score=r2_score(y_test,y_pred)
print(score)