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

void drawLetter(unsigned short col[16], unsigned short color, int leftCol) {
  for(char column=0; column<16; column++) {
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
  for(int i=50; i>=-750; i--) {
    drawLetter(letterM, s, i);
    drawLetter(letterA, r, i+16);
    drawLetter(letterK, g, i+32);
    drawLetter(letterE, y, i+48);
    drawLetter(letterR, s, i+64);
    drawLetter(letterW, r, i+80);
    drawLetter(letterO, g, i+96);
    drawLetter(letterR, y, i+112);
    drawLetter(letterK, s, i+128);
    drawLetter(letterS, r, i+144);
    drawLetter(space, b, i+160);
    drawLetter(letterA, j, i+176);
    drawLetter(letterN, j, i+192);
    drawLetter(letterD, j, i+208);
    drawLetter(space, b, i+224);
    drawLetter(letterF, r, i+240);
    drawLetter(letterR, w, i+256);
    drawLetter(letterC, j, i+272);
    drawLetter(space, b, i+288);
    drawLetter(space, b, i+304);
    drawLetter(letter3, s, i+320);
    drawLetter(letter3, s, i+336);
    drawLetter(letter2, s, i+352);
    drawLetter(letter2, s, i+368);
    drawLetter(space, b, i+384);
    drawLetter(letter3, r, i+400);
    drawLetter(letter6, r, i+416);
    drawLetter(letter5, r, i+432);
    drawLetter(letter6, r, i+448);
    drawLetter(space, b, i+464);
    drawLetter(letter1, p, i+480);
    drawLetter(letter0, p, i+496);
    drawLetter(letter7, p, i+512);
    drawLetter(letter6, p, i+528);
    drawLetter(space, b, i+544);
    drawLetter(letter8, y, i+560);
    drawLetter(letter3, y, i+576);
    drawLetter(letter0, y, i+592);
    drawLetter(space, b, i+608);
    delay(flowDelay);
  }
}
