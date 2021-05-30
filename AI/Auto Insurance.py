# Simple Linear Regression

# Importing the libraries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

# Importing the dataset
dataset = pd.read_csv('1.csv')
dataset
X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, 1].values

plt.scatter(X,y)
plt.show()

# Splitting the dataset into the Training set and Test set
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 1/3, random_state = 0)


# Fitting Simple Linear Regression to the Training set
from sklearn.linear_model import LinearRegression
regressor = LinearRegression()
regressor.fit(X_train, y_train)

#accuarcy
accuracy = regressor.score(X_test,y_test)
print(accuracy*100,'%')

# Predicting the Test set results
y_pred = regressor.predict(X_test)
#regressor.predict([[50.23]])
#actual value vs predicted value
df = pd.DataFrame({'Actual': y_test, 'Predicted': y_pred})
print(df)

from sklearn import metrics
print(metrics.mean_absolute_error(y_test,y_pred))

print(metrics.mean_squared_error(y_test,y_pred))

print(np.sqrt(metrics.mean_absolute_error(y_test,y_pred)))


# Visualising the Training set results
plt.scatter(X_train, y_train, color = 'red')
plt.plot(X_train, regressor.predict(X_train), color = 'blue')


# Visualising the Test set results
plt.scatter(X_test, y_test, color = 'red')
plt.plot(X_train, regressor.predict(X_train), color = 'blue')

plt.show()