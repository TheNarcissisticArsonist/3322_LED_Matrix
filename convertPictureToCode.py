#!/usr/bin/python
import numpy
import scipy
from scipy import misc
import sys
import math

imgArray = misc.imread(sys.argv[1])
varName = sys.argv[2]

imgSizeRow = 0
imgSizeCol = 0

colorArray = []

for i in range(len(imgArray)):
    colorArray.append([])
    for j in range(len(imgArray[i])):
        r = imgArray[i][j][0]
        g = imgArray[i][j][1]
        b = imgArray[i][j][2]
        colorArray[i].append([r, g, b])

codedArray = "unsigned char " + varName + "[][" + str(len(imgArray[0])) + "][3] = {"
for i in range(len(colorArray)):
    imgSizeRow += 1
    codedArray += "{"
    for j in range(len(colorArray[i])):
        r = math.floor((colorArray[i][j][0] * 7)/ 256)
        g = math.floor((colorArray[i][j][1] * 7)/ 256)
        b = math.floor((colorArray[i][j][2] * 7)/ 256)
        imgSizeCol += 1
        if j+1 == len(colorArray[i]):
            codedArray += "{" + str(r) + ", " + str(b) + ", " + str(c) + "}"
        else:
            codedArray += "{" + str(colorArray[i][j][0]) + ", " + str(colorArray[i][j][1]) + ", " + str(colorArray[i][j][2]) + "}, "
    if i+1 == len(colorArray):
        codedArray += "}"
    else:
        codedArray += "}, "
        imgSizeCol = 0
codedArray += "};"
print codedArray
print "int " + varName + "Cols = " + str(imgSizeCol) + ";"
print "int " + varName + "Rows = " + str(imgSizeRow) + ";"
