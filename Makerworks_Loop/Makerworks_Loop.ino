#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel Matrix(A, B, C, CLK, LAT, OE, false);

unsigned short b  = 0; //1 Black
unsigned short s  = 607; //2 Skyline Blue
unsigned short j  = 31; //3 "Just" Blue
unsigned short g  = 38880; //4 Green
unsigned short o  = 64928; //5 Orange
unsigned short w  = 65535; //6 White
unsigned short p  = 63519; //7 Purple
unsigned short y  = 65504; //8 Yellow
unsigned short r  = 63488; //9 Red  

unsigned short letterM[16] = {65535, 65535, 65535, 65535, 16128, 16128, 4032, 4032, 16128, 16128, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterA[12] = {8191, 16383, 32767, 61632, 61632, 61632, 61632, 32767, 16383, 8191, 0, 0};
unsigned short letterK[12] = {65535, 65535, 65535, 960, 4080, 4080, 15420, 15420, 61455, 61455, 0, 0};
unsigned short letterE[12] = {65535, 65535, 65535, 49539, 49539, 49539, 49539, 49539, 49155, 49155, 0, 0};
unsigned short letterR[13] = {65535, 65535, 65535, 49920, 49920, 49920, 50048, 50112, 59391, 32511, 15487, 0, 0};
unsigned short letterW[16] = {65535, 65535, 65535, 65535, 252, 252, 1008, 1008, 252, 252, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterO[14] = {8184, 32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 65535, 32766, 8184, 0, 0};
unsigned short letterS[14] = {15872, 32519, 62343, 57735, 57735, 57735, 57735, 57735, 57735, 57807, 57598, 124, 0, 0};
unsigned short space[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short letterN[14] = {65535, 65535, 65535, 30720, 7680, 1920, 480, 120, 30, 65535, 65535, 65535, 0, 0};
unsigned short letterD[12] = {65535, 65535, 65535, 49155, 49155, 49155, 57347, 32766, 16380, 4080, 0, 0};
unsigned short letterF[13] = {65535, 65535, 65535, 49920, 49920, 49920, 49920, 49920, 49920, 49152, 49152, 0, 0};
unsigned short letterC[12] = {32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 61455, 28686, 0, 0};
unsigned short letter3[14] = {12300, 28686, 57735, 49539, 49539, 49539, 49539, 49539, 49539, 58311, 32766, 15996, 0, 0};
unsigned short letter2[13] = {28687, 28703, 57407, 57471, 49395, 49635, 50115, 59267, 65283, 65027, 31747, 0, 0};
unsigned short letter6[14] = {16380, 32766, 57799, 49539, 49539, 49539, 49539, 49539, 49539, 57799, 28926, 12412, 0, 0};
unsigned short letter5[14] = {65024, 65282, 49923, 49923, 49923, 49923, 49923, 49923, 49923, 50055, 49662, 49404, 0, 0};
unsigned short letter1[12] = {3, 4099, 12291, 28675, 65535, 65535, 3, 3, 3, 3, 0, 0};
unsigned short letter0[12] = {16380, 32766, 57375, 49275, 49635, 51075, 56835, 63495, 32766, 16380, 0, 0};
unsigned short letter7[14] = {49152, 49152, 49167, 49215, 49407, 50112, 50944, 52736, 56320, 63488, 61440, 57344, 0, 0};
unsigned short letter8[12] = {15996, 32766, 49539, 49539, 49539, 49539, 49539, 49539, 32766, 15996, 0, 0};

void drawLetter(unsigned short *col, char arrayLength, unsigned short color, int leftCol) {
  for(char column=0; column<arrayLength; column++) {
    for(char row=0; row<16; row++) {
      if(leftCol > 32 || leftCol < -32) {
        return;
      }
      if((col[column] >> (15-row)) & 1) {
        Matrix.drawPixel(leftCol + column, row, color);
      }
      else {
        Matrix.drawPixel(leftCol + column, row, 0);
      }
    }
  }
}

int flowDelay = 5;

void setup() {
  Matrix.begin();
}
void loop() {
  int off = 0;
  for(int i=50; i>=-750; i--) {
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letterM, 16, s, i+off); off+=16;
    drawLetter(letterA, 12, r, i+off); off+=12;
    drawLetter(letterK, 12, g, i+off); off+=12;
    drawLetter(letterE, 12, y, i+off); off+=12;
    drawLetter(letterR, 13, s, i+off); off+=13;
    drawLetter(letterW, 16, r, i+off); off+=16;
    drawLetter(letterO, 14, g, i+off); off+=14;
    drawLetter(letterR, 13, y, i+off); off+=13;
    drawLetter(letterK, 12, s, i+off); off+=12;
    drawLetter(letterS, 14, r, i+off); off+=14;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letterA, 12, j, i+off); off+=12;
    drawLetter(letterN, 14, j, i+off); off+=14;
    drawLetter(letterD, 12, j, i+off); off+=12;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letterF, 13, r, i+off); off+=13;
    drawLetter(letterR, 13, w, i+off); off+=13;
    drawLetter(letterC, 12, j, i+off); off+=12;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letter3, 14, s, i+off); off+=14;
    drawLetter(letter3, 14, s, i+off); off+=14;
    drawLetter(letter2, 13, s, i+off); off+=13;
    drawLetter(letter2, 13, s, i+off); off+=13;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letter3, 14, r, i+off); off+=14;
    drawLetter(letter6, 14, r, i+off); off+=14;
    drawLetter(letter5, 14, r, i+off); off+=14;
    drawLetter(letter6, 14, r, i+off); off+=14;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letter1, 12, p, i+off); off+=12;
    drawLetter(letter0, 12, p, i+off); off+=12;
    drawLetter(letter7, 14, p, i+off); off+=14;
    drawLetter(letter6, 14, p, i+off); off+=14;
    drawLetter(space, 16, b, i+off); off+=16;
    drawLetter(letter8, 12, y, i+off); off+=12;
    drawLetter(letter3, 14, y, i+off); off+=14;
    drawLetter(letter0, 12, y, i+off); off+=12;
    drawLetter(space, 16, b, i+off); off+=16;
    delay(flowDelay);
    off=0;
  }
}
