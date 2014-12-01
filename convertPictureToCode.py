#!/usr/bin/python
import numpy
import scipy
from scipy import misc
import sys

imgArray = misc.imread(sys.argv[1])
#varName = sys.argv[2]

colorArray = []

for i in range(len(imgArray)):
    colorArray.append([])
    for j in range(len(imgArray[i])):
        r = imgArray[i][j][0]
        g = imgArray[i][j][1]
        b = imgArray[i][j][2]
        colorArray[i].append([r, g, b])

codedArray = "int color[" + str(len(imgArray)) + "][" + str(len(imgArray[0])) + "][3] = {"
for i in range(len(colorArray)):
    codedArray += "{"
    for j in range(len(colorArray[i])):
        if j+1 == len(colorArray[i]):
            codedArray += "{" + str(colorArray[i][j][0]) + ", " + str(colorArray[i][j][1]) + ", " + str(colorArray[i][j][2]) + "}"
        else:
            codedArray += "{" + str(colorArray[i][j][0]) + ", " + str(colorArray[i][j][1]) + ", " + str(colorArray[i][j][2]) + "}, "
    if i+1 == len(colorArray):
        codedArray += "}"
    else:
        codedArray += "}, "
codedArray += "};"
print codedArray
