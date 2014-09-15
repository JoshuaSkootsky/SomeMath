#!/usr/bin/python
# Joshua Skootsky, 2014

"Plots the output of MCPICalc.py"

import numpy as np
import matplotlib.pyplot as plt
from StringIO import StringIO
import math

with open('MCpi.out', 'r') as f:
    data = f.read()
    #Automatically closes when block ends

xs,ys = np.genfromtxt(StringIO(data), delimiter=" ",
            autostrip=True, comments='#',
            skip_header=0, usecols=(0,1),
             unpack=True)

fig = plt.figure()
ax1 = fig.add_subplot(111)
ax1.set_title("Monte Carlo Calculation of PI")
ax1.set_xlabel('Iterations')
ax1.set_ylabel('Value')

#Add a constant line
pies = [math.pi for t in range(len(xs)) ]
extent = [i for i in range(len(xs)) ]

ax1.plot(xs, ys, c='r', label = 'MC Value for PI')
ax1.plot(extent, pies,  c='b', label = 'math.pi value for PI')

leg = ax1.legend()
plt.show()
