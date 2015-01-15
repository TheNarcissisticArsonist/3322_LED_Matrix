#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short b  = matrix.Color333(0, 0, 0); //1 Black
unsigned short sB = matrix.Color333(0, 2, 7); //2 Skyline Blue
unsigned short rB = matrix.Color333(0, 0, 7); //3 Regular Blue
unsigned short g  = matrix.Color333(4, 7, 0); //4 Green
unsigned short o  = matrix.Color333(7, 5, 0); //5 Orange
unsigned short w  = matrix.Color333(7, 7, 7); //6 White
unsigned short p  = matrix.Color333(7, 0, 7); //7 Purple
unsigned short y  = matrix.Color333(7, 7, 0); //8 Yellow
unsigned short r  = matrix.Color333(7, 0, 0); //9 Red

void draw(int row, int col, char color) {
  switch(color) {
    case 1:
      matrix.drawPixel(row, col, b);
      break;
    case 2:
      matrix.drawPixel(row, col, sB);
      break;
    case 3:
      matrix.drawPixel(row, col, rB);
      break;
    case 4:
      matrix.drawPixel(row, col, g);
      break;
    case 5:
      matrix.drawPixel(row, col, o);
      break;
    case 6:
      matrix.drawPixel(row, col, w);
      break;
    case 7:
      matrix.drawPixel(row, col, p);
      break;
    case 8:
      matrix.drawPixel(row, col, y);
      break;
    case 9:
      matrix.drawPixel(row, col, r);
      break;
  }
}

void setup() {
  matrix.begin();
}
void loop() {
  
}
