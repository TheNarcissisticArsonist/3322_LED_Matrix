#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short rB = matrix.Color333(0, 0, 7);
unsigned short dB = matrix.Color333(0, 0, 1);
unsigned short sB = matrix.Color333(0, 2, 7);
unsigned short yC = matrix.Color333(7, 7, 0);
unsigned short rC = matrix.Color333(7, 2, 0);
unsigned short wC = matrix.Color333(7, 7, 7);
unsigned short r  = matrix.Color333(7, 0, 0);

//Standard Functions:
void drawCol(int c, int r, int column[], int length, unsigned short color[]) {
  for(int i=0; i<length; i++) {
    matrix.drawPixel(c, r + column[i], color[i]);
  }
}
void empty() {
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}


//3322 Walk Across Screen:
int c1_8[2] = {6, 14};
unsigned short cc1_8[2] = {sB, sB};

int c2_3_4_9_10_11[3] = {5, 10, 15};
unsigned short cc2_3_4_9_10_11[3] = {sB, sB, sB};

int c5_12[7] = {5, 6, 9, 10, 11, 14, 15};
unsigned short cc5_12[7] = {sB, sB, sB, sB, sB, sB, sB};

int c6_13[8] = {6, 7, 8, 9, 11, 12, 13, 14};
unsigned short cc6_13[8] = {sB, sB, sB, sB, sB, sB, sB, sB};

int c15_22[5] = {6, 7, 13, 14, 15};
unsigned short cc15_22[5] = {sB, sB, sB, sB, sB};

int c16_23[5] = {5, 6, 12, 13, 15};
unsigned short cc16_23[5] = {sB, sB, sB, sB, sB};

int c17_24[4] = {5, 11, 12, 15};
unsigned short cc17_24[4] = {sB, sB, sB, sB};

int c18_25[4] = {5, 10, 11, 15};
unsigned short cc18_25[4] = {sB, sB, sB, sB};

int c19_26[5] = {5, 6, 9, 10, 15};
unsigned short cc19_26[5] = {sB, sB, sB, sB, sB};

int c20_27[5] = {6, 7, 8, 9, 15};
unsigned short cc20_27[5] = {sB, sB, sB, sB, sB};

//3322 Eagle
void eagle(int c, int r) {
  matrix.drawPixel(c+0, r+2, dB);
  matrix.drawPixel(c+0, r+4, sB);
  matrix.drawPixel(c+0, r+6, rB);
  matrix.drawPixel(c+0, r+9, dB);

  matrix.drawPixel(c+1, r+1, rB);
  matrix.drawPixel(c+1, r+3, dB);
  matrix.drawPixel(c+1, r+4, sB);
  matrix.drawPixel(c+1, r+5, sB);
  matrix.drawPixel(c+1, r+6, rB);
  matrix.drawPixel(c+1, r+7, rB);
  matrix.drawPixel(c+1, r+8, dB);
  matrix.drawPixel(c+1, r+9, dB);

  matrix.drawPixel(c+2, r+2, rB);
  matrix.drawPixel(c+2, r+3, dB);
  matrix.drawPixel(c+2, r+4, dB);
  matrix.drawPixel(c+2, r+5, sB);
  matrix.drawPixel(c+2, r+7, rB);
  matrix.drawPixel(c+2, r+8, dB);

  matrix.drawPixel(c+3, 1, sB);
  matrix.drawPixel(c+3, 2, sB);
  matrix.drawPixel(c+3, 3, rB);
  matrix.drawPixel(c+3, 4, dB);
  matrix.drawPixel(c+3, 5, dB);
  matrix.drawPixel(c+3, 6, sB);
  matrix.drawPixel(c+3, 7, rB);
  matrix.drawPixel(c+3, 8, dB);
  matrix.drawPixel(c+3, 9, rB);
  matrix.drawPixel(c+3, 10, sB);
  matrix.drawPixel(c+3, 15, yC);

  matrix.drawPixel(c+4, r+0, sB);
  matrix.drawPixel(c+4, r+5, yC);
  matrix.drawPixel(c+4, r+6, dB);
  matrix.drawPixel(c+4, r+7, rB);
  matrix.drawPixel(c+4, r+8, dB);
  matrix.drawPixel(c+4, r+9, rB);
  matrix.drawPixel(c+4, r+13, rC);
  matrix.drawPixel(c+4, r+14, yC);

  matrix.drawPixel(c+5, r+4, yC);
  matrix.drawPixel(c+5, r+5, yC);
  matrix.drawPixel(c+5, r+7, dB);
  matrix.drawPixel(c+5, r+8, dB);
  matrix.drawPixel(c+5, r+9, rB);
  matrix.drawPixel(c+5, r+12, rC);
  matrix.drawPixel(c+5, r+13, rC);
  matrix.drawPixel(c+5, r+14, yC);
  matrix.drawPixel(c+5, r+15, yC);

  matrix.drawPixel(c+6, r+3, wC);
  matrix.drawPixel(c+6, r+4, wC);
  matrix.drawPixel(c+6, r+5, yC);
  matrix.drawPixel(c+6, r+7, rC);
  matrix.drawPixel(c+6, r+8, rC);
  matrix.drawPixel(c+6, r+9, dB);
  matrix.drawPixel(c+6, r+11, rC);
  matrix.drawPixel(c+6, r+12, rC);

  matrix.drawPixel(c+7, r+3, wC);
  matrix.drawPixel(c+7, r+4, sB);
  matrix.drawPixel(c+7, r+5, wC);
  matrix.drawPixel(c+7, r+6, rC);
  matrix.drawPixel(c+7, r+7, rC);
  matrix.drawPixel(c+7, r+8, rC);
  matrix.drawPixel(c+7, r+9, rC);
  matrix.drawPixel(c+7, r+10, rC);
  matrix.drawPixel(c+7, r+11, rC);

  matrix.drawPixel(c+8, r+3, wC);
  matrix.drawPixel(c+8, r+4, wC);
  matrix.drawPixel(c+8, r+5, wC);
  matrix.drawPixel(c+8, r+6, rC);
  matrix.drawPixel(c+8, r+7, rC);
  matrix.drawPixel(c+8, r+8, rC);
  matrix.drawPixel(c+8, r+9, rC);
  matrix.drawPixel(c+8, r+10, rC);
  matrix.drawPixel(c+8, r+11, rC);

  matrix.drawPixel(c+9, r+4, wC);
  matrix.drawPixel(c+9, r+5, wC);
  matrix.drawPixel(c+9, r+6, rC);
  matrix.drawPixel(c+9, r+7, rC);
  matrix.drawPixel(c+9, r+8, rC);
  matrix.drawPixel(c+9, r+9, dB);
  matrix.drawPixel(c+9, r+11, rC);
  matrix.drawPixel(c+9, r+12, rC);

  matrix.drawPixel(c+10, r+7, dB);
  matrix.drawPixel(c+10, r+8, dB);
  matrix.drawPixel(c+10, r+9, rB);
  matrix.drawPixel(c+10, r+12, rC);
  matrix.drawPixel(c+10, r+13, rC);
  matrix.drawPixel(c+10, r+14, yC);
  matrix.drawPixel(c+10, r+15, yC);

  matrix.drawPixel(c+11, r+0, sB);
  matrix.drawPixel(c+11, r+6, dB);
  matrix.drawPixel(c+11, r+7, rB);
  matrix.drawPixel(c+11, r+8, dB);
  matrix.drawPixel(c+11, r+9, rB);
  matrix.drawPixel(c+11, r+13, rC);
  matrix.drawPixel(c+11, r+14, yC);

  matrix.drawPixel(c+12, r+1, sB);
  matrix.drawPixel(c+12, r+2, sB);
  matrix.drawPixel(c+12, r+3, rB);
  matrix.drawPixel(c+12, r+4, dB);
  matrix.drawPixel(c+12, r+5, dB);
  matrix.drawPixel(c+12, r+6, sB);
  matrix.drawPixel(c+12, r+7, rB);
  matrix.drawPixel(c+12, r+8, dB);
  matrix.drawPixel(c+12, r+9, rB);
  matrix.drawPixel(c+12, r+10, sB);
  matrix.drawPixel(c+12, r+15, yC);

  matrix.drawPixel(c+13, r+2, rB);
  matrix.drawPixel(c+13, r+3, dB);
  matrix.drawPixel(c+13, r+4, dB);
  matrix.drawPixel(c+13, r+5, sB);
  matrix.drawPixel(c+13, r+7, rB);
  matrix.drawPixel(c+13, r+8, dB);

  matrix.drawPixel(c+14, r+1, rB);
  matrix.drawPixel(c+14, r+3, dB);
  matrix.drawPixel(c+14, r+4, sB);
  matrix.drawPixel(c+14, r+5, sB);
  matrix.drawPixel(c+14, r+6, rB);
  matrix.drawPixel(c+14, r+7, rB);
  matrix.drawPixel(c+14, r+8, dB);
  matrix.drawPixel(c+14, r+9, dB);

  matrix.drawPixel(c+15, r+2, dB);
  matrix.drawPixel(c+15, r+4, sB);
  matrix.drawPixel(c+15, r+6, rB);
  matrix.drawPixel(c+15, r+9, dB);
}
void e3322(int c, int r) {
  matrix.drawPixel(c+19, r+1, sB);
  matrix.drawPixel(c+19, r+5, sB);
  matrix.drawPixel(c+19, r+9, sB);
  matrix.drawPixel(c+19, r+13, sB);
  matrix.drawPixel(c+19, r+14, sB);

  matrix.drawPixel(c+20, r+0, sB);
  matrix.drawPixel(c+20, r+3, sB);
  matrix.drawPixel(c+20, r+6, sB);
  matrix.drawPixel(c+20, r+8, sB);
  matrix.drawPixel(c+20, r+12, sB);
  matrix.drawPixel(c+20, r+14, sB);

  matrix.drawPixel(c+21, r+0, sB);
  matrix.drawPixel(c+21, r+3, sB);
  matrix.drawPixel(c+21, r+6, sB);
  matrix.drawPixel(c+21, r+8, sB);
  matrix.drawPixel(c+21, r+11, sB);
  matrix.drawPixel(c+21, r+14, sB);

  matrix.drawPixel(c+22, r+1, sB);
  matrix.drawPixel(c+22, r+2, sB);
  matrix.drawPixel(c+22, r+4, sB);
  matrix.drawPixel(c+22, r+5, sB);
  matrix.drawPixel(c+22, r+9, sB);
  matrix.drawPixel(c+22, r+10, sB);
  matrix.drawPixel(c+22, r+14, sB);

  matrix.drawPixel(c+25, r+1, sB);
  matrix.drawPixel(c+25, r+5, sB);
  matrix.drawPixel(c+25, r+9, sB);
  matrix.drawPixel(c+25, r+13, sB);
  matrix.drawPixel(c+25, r+14, sB);

  matrix.drawPixel(c+26, r+0, sB);
  matrix.drawPixel(c+26, r+3, sB);
  matrix.drawPixel(c+26, r+6, sB);
  matrix.drawPixel(c+26, r+8, sB);
  matrix.drawPixel(c+26, r+12, sB);
  matrix.drawPixel(c+26, r+14, sB);

  matrix.drawPixel(c+27, r+0, sB);
  matrix.drawPixel(c+27, r+3, sB);
  matrix.drawPixel(c+27, r+6, sB);
  matrix.drawPixel(c+27, r+8, sB);
  matrix.drawPixel(c+27, r+11, sB);
  matrix.drawPixel(c+27, r+14, sB);

  matrix.drawPixel(c+28, r+1, sB);
  matrix.drawPixel(c+28, r+2, sB);
  matrix.drawPixel(c+28, r+4, sB);
  matrix.drawPixel(c+28, r+5, sB);
  matrix.drawPixel(c+28, r+9, sB);
  matrix.drawPixel(c+28, r+10, sB);
  matrix.drawPixel(c+28, r+14, sB);
}

//Go Eagles
void goEagles(int c, int r) {
  matrix.drawPixel(c+0, r+2, dB);
  matrix.drawPixel(c+0, r+4, sB);
  matrix.drawPixel(c+0, r+6, rB);
  matrix.drawPixel(c+0, r+9, dB);

  matrix.drawPixel(c+1, r+1, rB);
  matrix.drawPixel(c+1, r+3, dB);
  matrix.drawPixel(c+1, r+4, sB);
  matrix.drawPixel(c+1, r+5, sB);
  matrix.drawPixel(c+1, r+6, rB);
  matrix.drawPixel(c+1, r+7, rB);
  matrix.drawPixel(c+1, r+8, dB);
  matrix.drawPixel(c+1, r+9, dB);

  matrix.drawPixel(c+2, r+2, rB);
  matrix.drawPixel(c+2, r+3, dB);
  matrix.drawPixel(c+2, r+4, dB);
  matrix.drawPixel(c+2, r+5, sB);
  matrix.drawPixel(c+2, r+7, rB);
  matrix.drawPixel(c+2, r+8, dB);

  matrix.drawPixel(c+3, r+1, sB);
  matrix.drawPixel(c+3, r+2, sB);
  matrix.drawPixel(c+3, r+3, rB);
  matrix.drawPixel(c+3, r+4, dB);
  matrix.drawPixel(c+3, r+5, dB);
  matrix.drawPixel(c+3, r+6, sB);
  matrix.drawPixel(c+3, r+7, rB);
  matrix.drawPixel(c+3, r+8, dB);
  matrix.drawPixel(c+3, r+9, rB);
  matrix.drawPixel(c+3, r+10, sB);
  matrix.drawPixel(c+3, r+15, yC);

  matrix.drawPixel(c+4, r+0, sB);
  matrix.drawPixel(c+4, r+5, yC);
  matrix.drawPixel(c+4, r+6, dB);
  matrix.drawPixel(c+4, r+7, rB);
  matrix.drawPixel(c+4, r+8, dB);
  matrix.drawPixel(c+4, r+9, rB);
  matrix.drawPixel(c+4, r+13, rC);
  matrix.drawPixel(c+4, r+14, yC);

  matrix.drawPixel(c+5, r+4, yC);
  matrix.drawPixel(c+5, r+5, yC);
  matrix.drawPixel(c+5, r+7, dB);
  matrix.drawPixel(c+5, r+8, dB);
  matrix.drawPixel(c+5, r+9, rB);
  matrix.drawPixel(c+5, r+12, rC);
  matrix.drawPixel(c+5, r+13, rC);
  matrix.drawPixel(c+5, r+14, yC);
  matrix.drawPixel(c+5, r+15, yC);

  matrix.drawPixel(c+6, r+3, wC);
  matrix.drawPixel(c+6, r+4, wC);
  matrix.drawPixel(c+6, r+5, yC);
  matrix.drawPixel(c+6, r+7, r);
  matrix.drawPixel(c+6, r+8, r);
  matrix.drawPixel(c+6, r+9, dB);
  matrix.drawPixel(c+6, r+11, rC);
  matrix.drawPixel(c+6, r+12, rC);

  matrix.drawPixel(c+7, r+3, wC);
  matrix.drawPixel(c+7, r+4, sB);
  matrix.drawPixel(c+7, r+5, wC);
  matrix.drawPixel(c+7, r+6, rC);
  matrix.drawPixel(c+7, r+7, rC);
  matrix.drawPixel(c+7, r+8, rC);
  matrix.drawPixel(c+7, r+9, rC);
  matrix.drawPixel(c+7, r+10, rC);
  matrix.drawPixel(c+7, r+11, rC);

  matrix.drawPixel(c+8, r+3, wC);
  matrix.drawPixel(c+8, r+4, wC);
  matrix.drawPixel(c+8, r+5, wC);
  matrix.drawPixel(c+8, r+6, rC);
  matrix.drawPixel(c+8, r+7, rC);
  matrix.drawPixel(c+8, r+8, rC);
  matrix.drawPixel(c+8, r+9, rC);
  matrix.drawPixel(c+8, r+10, rC);
  matrix.drawPixel(c+8, r+11, rC);

  matrix.drawPixel(c+9, r+4, wC);
  matrix.drawPixel(c+9, r+5, wC);
  matrix.drawPixel(c+9, r+6, rC);
  matrix.drawPixel(c+9, r+7, rC);
  matrix.drawPixel(c+9, r+8, rC);
  matrix.drawPixel(c+9, r+9, dB);
  matrix.drawPixel(c+9, r+11, rC);
  matrix.drawPixel(c+9, r+12, rC);

  matrix.drawPixel(c+10, r+7, dB);
  matrix.drawPixel(c+10, r+8, dB);
  matrix.drawPixel(c+10, r+9, rB);
  matrix.drawPixel(c+10, r+12, rC);
  matrix.drawPixel(c+10, r+13, rC);
  matrix.drawPixel(c+10, r+14, yC);
  matrix.drawPixel(c+10, r+15, yC);

  matrix.drawPixel(c+11, r+0, sB);
  matrix.drawPixel(c+11, r+6, dB);
  matrix.drawPixel(c+11, r+7, rB);
  matrix.drawPixel(c+11, r+8, dB);
  matrix.drawPixel(c+11, r+9, rB);
  matrix.drawPixel(c+11, r+10, sB);
  matrix.drawPixel(c+11, r+13, rC);
  matrix.drawPixel(c+11, r+14, yC);

  matrix.drawPixel(c+12, r+1, sB);
  matrix.drawPixel(c+12, r+2, sB);
  matrix.drawPixel(c+12, r+3, rB);
  matrix.drawPixel(c+12, r+4, dB);
  matrix.drawPixel(c+12, r+5, dB);
  matrix.drawPixel(c+12, r+6, sB);
  matrix.drawPixel(c+12, r+7, rB);
  matrix.drawPixel(c+12, r+8, dB);
  matrix.drawPixel(c+12, r+9, rB);
  matrix.drawPixel(c+12, r+10, sB);
  matrix.drawPixel(c+12, r+15, yC);

  matrix.drawPixel(c+13, r+2, rB);
  matrix.drawPixel(c+13, r+3, dB);
  matrix.drawPixel(c+13, r+4, dB);
  matrix.drawPixel(c+13, r+5, sB);
  matrix.drawPixel(c+13, r+7, rB);
  matrix.drawPixel(c+13, r+8, dB);
  matrix.drawPixel(c+13, r+10, rB);

  matrix.drawPixel(c+14, r+1, rB);
  matrix.drawPixel(c+14, r+3, dB);
  matrix.drawPixel(c+14, r+4, sB);
  matrix.drawPixel(c+14, r+5, sB);
  matrix.drawPixel(c+14, r+6, rB);
  matrix.drawPixel(c+14, r+7, rB);
  matrix.drawPixel(c+14, r+8, dB);
  matrix.drawPixel(c+14, r+9, dB);
  matrix.drawPixel(c+14, r+10, rB);
  matrix.drawPixel(c+14, r+11, rB);

  matrix.drawPixel(c+15, r+2, dB);
  matrix.drawPixel(c+15, r+4, sB);
  matrix.drawPixel(c+15, r+6, rB);
  matrix.drawPixel(c+15, r+9, dB);
  matrix.drawPixel(c+15, r+11, rB);

  matrix.drawPixel(c+18, r+5, sB);
  matrix.drawPixel(c+18, r+6, sB);
  matrix.drawPixel(c+18, r+7, sB);
  matrix.drawPixel(c+18, r+8, sB);
  matrix.drawPixel(c+18, r+9, sB);
  matrix.drawPixel(c+18, r+11, sB);
  matrix.drawPixel(c+18, r+12, sB);
  matrix.drawPixel(c+18, r+13, sB);
  matrix.drawPixel(c+18, r+14, sB);
  matrix.drawPixel(c+18, r+15, sB);

  matrix.drawPixel(c+19, r+5, sB);
  matrix.drawPixel(c+19, r+7, sB);
  matrix.drawPixel(c+19, r+9, sB);
  matrix.drawPixel(c+19, r+15, sB);

  matrix.drawPixel(c+20, r+1, sB);
  matrix.drawPixel(c+20, r+2, sB);
  matrix.drawPixel(c+20, r+5, sB);
  matrix.drawPixel(c+20, r+9, sB);
  matrix.drawPixel(c+20, r+15, sB);

  matrix.drawPixel(c+21, r+0, sB);
  matrix.drawPixel(c+21, r+3, sB);

  matrix.drawPixel(c+22, r+0, sB);
  matrix.drawPixel(c+22, r+2, sB);
  matrix.drawPixel(c+22, r+3, sB);
  matrix.drawPixel(c+22, r+6, sB);
  matrix.drawPixel(c+22, r+7, sB);
  matrix.drawPixel(c+22, r+8, sB);
  matrix.drawPixel(c+22, r+9, sB);
  matrix.drawPixel(c+22, r+11, sB);
  matrix.drawPixel(c+22, r+12, sB);
  matrix.drawPixel(c+22, r+13, sB);
  matrix.drawPixel(c+22, r+14, sB);
  matrix.drawPixel(c+22, r+15, sB);

  matrix.drawPixel(c+23, r+5, sB);
  matrix.drawPixel(c+23, r+7, sB);
  matrix.drawPixel(c+23, r+11, sB);
  matrix.drawPixel(c+23, r+13, sB);
  matrix.drawPixel(c+23, r+15, sB);

  matrix.drawPixel(c+24, r+1, sB);
  matrix.drawPixel(c+24, r+2, sB);
  matrix.drawPixel(c+24, r+6, sB);
  matrix.drawPixel(c+24, r+7, sB);
  matrix.drawPixel(c+24, r+8, sB);
  matrix.drawPixel(c+24, r+9, sB);
  matrix.drawPixel(c+24, r+11, sB);
  matrix.drawPixel(c+24, r+15, sB);

  matrix.drawPixel(c+25, r+0, sB);
  matrix.drawPixel(c+25, r+3, sB);

  matrix.drawPixel(c+26, r+1, sB);
  matrix.drawPixel(c+26, r+2, sB);
  matrix.drawPixel(c+26, r+6, sB);
  matrix.drawPixel(c+26, r+7, sB);
  matrix.drawPixel(c+26, r+8, sB);
  matrix.drawPixel(c+26, r+12, sB);
  matrix.drawPixel(c+26, r+15, sB);

  matrix.drawPixel(c+27, r+5, sB);
  matrix.drawPixel(c+27, r+9, sB);
  matrix.drawPixel(c+27, r+11, sB);
  matrix.drawPixel(c+27, r+13, sB);
  matrix.drawPixel(c+27, r+15, sB);

  matrix.drawPixel(c+28, r+5, sB);
  matrix.drawPixel(c+28, r+7, sB);
  matrix.drawPixel(c+28, r+9, sB);
  matrix.drawPixel(c+28, r+11, sB);
  matrix.drawPixel(c+28, r+14, sB);

  matrix.drawPixel(c+29, r+5, sB);
  matrix.drawPixel(c+29, r+7, sB);
  matrix.drawPixel(c+29, r+8, sB);
  matrix.drawPixel(c+29, r+9, sB);

  matrix.drawPixel(c+30, r+11, sB);
  matrix.drawPixel(c+30, r+12, sB);
  matrix.drawPixel(c+30, r+13, sB);
  matrix.drawPixel(c+30, r+15, sB);
}

//Inverse 3322
void ic1_8(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+14, sB);
}
void ic2_3_4_9_10_11(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic5_12(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+14, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic6_13(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+7, sB);
  matrix.drawPixel(c, r+8, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+12, sB);
  matrix.drawPixel(c, r+13, sB);
  matrix.drawPixel(c, r+14, sB);
}

void ic15_22(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+7, sB);
  matrix.drawPixel(c, r+13, sB);
  matrix.drawPixel(c, r+14, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic16_23(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+12, sB);
  matrix.drawPixel(c, r+13, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic17_24(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+12, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic18_25(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic19_26(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+15, sB);
}
void ic20_27(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+7, sB);
  matrix.drawPixel(c, r+8, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+15, sB);
}

void setup() {
  matrix.begin();
  randomSeed(424242); //THE ANSWER * 3
}

void loop() {
  int del = 1000;
  int dR = 0;
  int whichOne = (int)random(1, 4);
  switch(whichOne) {
    case 1:
      delay(1000);
      for(int n=1; n<=4; n++) {
        for(int i=32; i>-28; i--) {
          drawCol(i, dR, c1_8, 2, cc1_8);
          drawCol(i+1, dR, c2_3_4_9_10_11, 3, cc2_3_4_9_10_11);
          drawCol(i+2, dR, c2_3_4_9_10_11, 3, cc2_3_4_9_10_11);
          drawCol(i+3, dR, c2_3_4_9_10_11, 3, cc2_3_4_9_10_11);
          drawCol(i+4, dR, c5_12, 7, cc5_12);
          drawCol(i+5, dR, c6_13, 8, cc6_13);

          drawCol(i+7, dR, c1_8, 2, cc1_8);
          drawCol(i+8, dR, c2_3_4_9_10_11, 3, cc2_3_4_9_10_11);
          drawCol(i+9, dR, c2_3_4_9_10_11, 3, cc2_3_4_9_10_11);
          drawCol(i+10, dR, c2_3_4_9_10_11, 3, cc2_3_4_9_10_11);
          drawCol(i+11, dR, c5_12, 7, cc5_12);
          drawCol(i+12, dR, c6_13, 8, cc6_13);
  
          drawCol(i+14, dR, c15_22, 5, cc15_22);
          drawCol(i+15, dR, c16_23, 5, cc16_23);
          drawCol(i+16, dR, c17_24, 4, cc17_24);
          drawCol(i+17, dR, c18_25, 4, cc18_25);
          drawCol(i+18, dR, c19_26, 5, cc19_26);
          drawCol(i+19, dR, c20_27, 5, cc20_27);
  
          drawCol(i+21, dR, c15_22, 5, cc15_22);
          drawCol(i+22, dR, c16_23, 5, cc16_23);
          drawCol(i+23, dR, c17_24, 4, cc17_24);
          drawCol(i+24, dR, c18_25, 4, cc18_25);
          drawCol(i+25, dR, c19_26, 5, cc19_26);
          drawCol(i+26, dR, c20_27, 5, cc20_27);
          delay(40);
          empty();
        }
        delay(1000);
      }
      break;
    case 2:
      for(int n=1; n<=6; n++) {
        eagle(0, 0);
        e3322(0, 0);
        delay(500);
        empty();
        delay(500);
      }
       break;
    case 3:
       for(int n=1; n<=6; n++) {
        goEagles(0, 0);
        delay(500);
        empty();
        delay(500);
      }
      break;
    case 4:
      for(int n=1; n<=4; n++) {
        for(int x = 31; x >= -40; x--) {
            ic1_8(x, 0);
            ic2_3_4_9_10_11(x + 1, 0);
            ic2_3_4_9_10_11(x + 2, 0);
            ic2_3_4_9_10_11(x + 3, 0);
            ic5_12(x + 4, 0);
            ic6_13(x + 5, 0);
            ic1_8(x + 7, 0);
            ic2_3_4_9_10_11(x + 8, 0);
            ic2_3_4_9_10_11(x + 9, 0);
            ic2_3_4_9_10_11(x + 10, 0);
            ic5_12(x + 11, 0);
            ic6_13(x + 12, 0);
            //33 /\
            //22 \/
            ic15_22(x + 14, 0);
            ic16_23(x + 15, 0);
            ic17_24(x + 16, 0);
            ic18_25(x + 17, 0);
            ic19_26(x + 18, 0);
            ic20_27(x + 19, 0);
            ic15_22(x + 21, 0);
            ic16_23(x + 22, 0);
            ic17_24(x + 23, 0);
            ic18_25(x + 24, 0);
            ic19_26(x + 25, 0);
            ic20_27(x + 26, 0);
            delay(40);
            empty();
          }
          delay(1000);
        }
      break;
  }
  delay(del);
}
