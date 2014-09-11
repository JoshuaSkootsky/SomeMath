#!/usr/bin/python
# Joshua SKootsky, 2014
# Python 2.7
from __future__ import (absolute_import, division, print_function)
import math
import sys
import datetime
now = datetime.datetime.utcnow()
print("Date and Time: ", now , " UTC")

# get rid of scrupt name @ sys.argv[0]
n = len(sys.argv) - 1
values = [float(sys.argv[i]) for i in range(1,n+1)]

sum = 0
for i in range(n):
    sum += values[i]
mean = sum/(n)
print("The mean is: ", mean)

unavgdev = 0
for i in range(n):
    unavgdev += math.fabs(values[i] - mean)
avgdev = unavgdev/(n)
print("Average deviation is: ", avgdev)

unvar = 0
for i in range(n):
    unvar += (values[i] - mean)**2
variance = unvar/n
print("The variance is: ", variance)

stddev = math.sqrt(variance)
print("The standard deviation is: ", stddev)
