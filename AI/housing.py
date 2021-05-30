# -*- coding: utf-8 -*-
"""
Created on Sat Sep 21 22:37:09 2019

@author: SSROY
"""

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

dataset = pd.read_csv('housing.csv')


# Fitting Simple Linear Regression to the Training set
from sklearn.linear_model import LinearRegression
reg = LinearRegression()
reg.fit(dataset[['CRIM','ZN','INDUS','CHAS','NOX','RM','AGE','DIS','RAD','TAX','PTRATIO','B','LSTAT']],dataset.MEDV)
reg.coef_
#reg.predict([[]])

accuracy = reg.score()
print(accuracy*100,'%')