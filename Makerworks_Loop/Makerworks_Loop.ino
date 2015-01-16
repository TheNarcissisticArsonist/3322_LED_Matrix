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

unsigned short M[16] = {65535, 65535, 65535, 65535, 16128, 16128, 4032, 4032, 16128, 16128, 65535, 65535, 65535, 65535, 0, 0};

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
  drawLetter(M, s, 0);
}
