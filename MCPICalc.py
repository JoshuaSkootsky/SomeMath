"" Calculates the constant PI using a Monte Carlo Integration method """
""" Runs from the command line with one argument, the number of iterations, i.e. python MCPICalc.py 10000"""
# Joshua Skootsky, 2014
# 
#  Get decimal division from 3.0
# This is Python 2.7
from __future__ import (absolute_import, division, print_function)
# Get command line stuff
from sys import argv
script, iterations = argv
import math
import random
"""Here are utility functions"""
def distance2D(x1,y1,x2,y2):
    """Calulates the Euclidian distance between two points"""
    return math.sqrt((x1-x2)**2 + (y1-y2)**2)

def randInBox():
    """Provides a rand guarenteed to be within 0 and 1 within a box"""
    rand  = random.uniform(0,1)
    return rand

def in2DCircle(x,y):
    """Boolean check if a random number in the unit box is within a unit circle inscribed within the box"""
    if distance2D(x,y,0.5,0.5) <= 0.5:
        return True
    else:
        return False

""" Here the real script begins """
count = 0
circle_count = 0
n = int(iterations)
outfile = open("MCpi.out", "wt")
for i in range(n):
    count = count + 1
    if in2DCircle(randInBox(),randInBox()):
        circle_count = circle_count + 1
    # Write to file
    outfile.write(str(count) + " " +  str(4*circle_count/count) + " \n")
    # Print out if count is a multiple of 10, and the last iteration
    if (math.fmod( math.log10(count), 1 ) == 0) or count == n:
        print (count," iterations"," circle count:" , circle_count, " Ratio of circle count to count", circle_count/count)
        print("PI is approximately equal to that ratio times 4, or ", 4*circle_count/count, "\n")

outfile.close()
