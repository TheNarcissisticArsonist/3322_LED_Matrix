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
unsigned short letterA[16] = {8191, 16383, 32767, 61632, 61632, 61632, 61632, 32767, 16383, 8191, 0, 0, 0, 0, 0, 0};
unsigned short letterK[16] = {65535, 65535, 65535, 960, 4080, 4080, 15420, 15420, 61455, 61455, 0, 0, 0, 0, 0, 0};
unsigned short letterE[16] = {65535, 65535, 65535, 49539, 49539, 49539, 49539, 49539, 49155, 49155, 0, 0, 0, 0, 0, 0};
unsigned short letterR[16] = {65535, 65535, 65535, 49920, 49920, 49920, 50048, 50112, 59391, 32511, 15487, 0, 0, 0, 0, 0};
unsigned short letterW[16] = {65535, 65535, 65535, 65535, 252, 252, 1008, 1008, 252, 252, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterO[16] = {8184, 32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 65535, 32766, 8184, 0, 0, 0, 0};
unsigned short letterS[16] = {15872, 32515, 58243, 49539, 49539, 49539, 49539, 49539, 49539, 49607, 49406, 124, 0, 0, 0, 0};
unsigned short space[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short letterN[16] = {65535, 65535, 65535, 30720, 7680, 1920, 480, 120, 30, 65535, 65535, 65535, 0, 0, 0, 0};
unsigned short letterD[16] = {65535, 65535, 65535, 49155, 49155, 49155, 57347, 32766, 16380, 4080, 0, 0, 0, 0, 0, 0};
unsigned short letterF[16] = {65535, 65535, 65535, 49920, 49920, 49920, 49920, 49920, 49920, 49152, 49152, 0, 0, 0, 0, 0};
unsigned short letterC[16] = {32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 61455, 28686, 0, 0, 0, 0, 0, 0};
unsigned short letter3[16] = {12300, 28686, 57735, 49539, 49539, 49539, 49539, 49539, 49539, 58311, 32766, 15996, 0, 0, 0, 0};
unsigned short letter2[16] = {28687, 28703, 57407, 57471, 49395, 49635, 50115, 59267, 65283, 65027, 31747, 0, 0, 0, 0, 0};
unsigned short letter6[16] = {16380, 32766, 57799, 49539, 49539, 49539, 49539, 49539, 49539, 57799, 28926, 12412, 0, 0, 0, 0};
unsigned short letter5[16] = {65024, 65282, 49923, 49923, 49923, 49923, 49923, 49923, 49923, 50055, 49662, 49404, 0, 0, 0, 0};
unsigned short letter1[16] = {3, 4099, 12291, 28675, 65535, 65535, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0};
unsigned short letter0[16] = {16380, 32766, 57375, 49275, 49635, 51075, 56835, 63495, 32766, 16380, 0, 0, 0, 0, 0, 0};
unsigned short letter7[16] = {49152, 49152, 49167, 49215, 49407, 50112, 50944, 52736, 56320, 63488, 61440, 57344, 0, 0, 0, 0};
unsigned short letter8[16] = {15996, 32766, 49539, 49539, 49539, 49539, 49539, 49539, 32766, 15996, 0, 0, 0, 0, 0, 0};

int delayLength = 500;

void drawLetter(unsigned short col[16], unsigned short color, int leftCol) {
  for(char column=0; column<16; column++) {
    for(char row=0; row<16; row++) {
      if((col[column] >> (15 - row)) & 1) {
        Matrix.drawPixel(row, leftCol + column, color);
      }
      else {
        Matrix.drawPixel(row, leftCol + column, 0);
      }
    }
  }
}

void setup() {
  Matrix.begin();
}
void loop() {
  drawLetter(letterM, s, 0);
  delay(delayLength);
  drawLetter(letterA, r, 0);
  delay(delayLength);
  drawLetter(letterK, g, 0);
  delay(delayLength);
  drawLetter(letterE, y, 0);
  delay(delayLength);
  drawLetter(letterR, s, 0);
  delay(delayLength);
  drawLetter(letterW, r, 0);
  delay(delayLength);
  drawLetter(letterO, g, 0);
  delay(delayLength);
  drawLetter(letterR, y, 0);
  delay(delayLength);
  drawLetter(letterK, s, 0);
  delay(delayLength);
  drawLetter(letterS, r, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(letterA, j, 0);
  delay(delayLength);
  drawLetter(letterN, j, 0);
  delay(delayLength);
  drawLetter(letterD, j, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(letterF, r, 0);
  delay(delayLength);
  drawLetter(letterR, w, 0);
  delay(delayLength);
  drawLetter(letterC, j, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(letter3, s, 0);
  delay(delayLength);
  drawLetter(letter3, s, 0);
  delay(delayLength);
  drawLetter(letter2, s, 0);
  delay(delayLength);
  drawLetter(letter2, s, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(letter3, r, 0);
  delay(delayLength);
  drawLetter(letter6, r, 0);
  delay(delayLength);
  drawLetter(letter5, r, 0);
  delay(delayLength);
  drawLetter(letter6, r, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(letter1, p, 0);
  delay(delayLength);
  drawLetter(letter0, p, 0);
  delay(delayLength);
  drawLetter(letter7, p, 0);
  delay(delayLength);
  drawLetter(letter6, p, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(letter8, y, 0);
  delay(delayLength);
  drawLetter(letter3, y, 0);
  delay(delayLength);
  drawLetter(letter0, y, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
  drawLetter(space, b, 0);
  delay(delayLength);
}
