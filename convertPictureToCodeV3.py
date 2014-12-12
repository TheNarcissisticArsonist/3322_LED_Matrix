#!/usr/bin/python

"""
This version is similar to convertPictureToCode.py, but it outputs it as a series of arrays.
Each column is two arrays, a pixel array and a color array.
You will need to include the following in your arduino code:

int sB = Matrix.color333(0, 2, 7); //Skyline Blue
int dB = Matrix.color333(0, 0, 1); //Dark Blue
int rB = Matrix.color333(7, 2, 0); //Red Brown

int c0 = Matrix.color333(0, 0, 0); //Black
int wC = Matrix.color333(7, 7, 7); //White
int yC = Matrix.color333(7, 7, 0); //Yellow
int rC = Matrix.color333(7, 0, 0); //Red
int gC = Matrix.color333(0, 7, 0); //Green
int bC = Matrix.color333(0, 0, 7); //Blue
"""

"""
This program converts an image into a C string that can be read by Picture_To_Matrix.ino

Command line arguments:
python convertPictureToCode.py ARG1 ARG2
Where ARG1 is the filepath to the picture, and ARG2 is the name of the variable for the array you get.

Just copy and paste the output into your code, and you're good to go!
"""

import numpy
import scipy
from scipy import misc
import sys
import math

imgArray = misc.imread(sys.argv[1])
varNames = sys.argv[2]

colorArray = []
