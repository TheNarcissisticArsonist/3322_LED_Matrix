#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short b = matrix.Color333(0, 0, 0);

void empty() {
  matrix.fillScreen(matrix.Color333(0, 2, 7));
}
//3s
void c1_8(int c, int r) {
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+14, b);
}
void c2_3_4_9_10_11(int c, int r) {
  matrix.drawPixel(c, r+5, b);
  matrix.drawPixel(c, r+10, b);
  matrix.drawPixel(c, r+15, b);
}
void c5_12(int c, int r) {
  matrix.drawPixel(c, r+5, b);
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+9, b);
  matrix.drawPixel(c, r+10, b);
  matrix.drawPixel(c, r+11, b);
  matrix.drawPixel(c, r+14, b);
  matrix.drawPixel(c, r+15, b);
}
void c6_13(int c, int r) {
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+7, b);
  matrix.drawPixel(c, r+8, b);
  matrix.drawPixel(c, r+9, b);
  matrix.drawPixel(c, r+11, b);
  matrix.drawPixel(c, r+12, b);
  matrix.drawPixel(c, r+13, b);
  matrix.drawPixel(c, r+14, b);
}

//2s
void c15_22(int c, int r) {
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+7, b);
  matrix.drawPixel(c, r+13, b);
  matrix.drawPixel(c, r+14, b);
  matrix.drawPixel(c, r+15, b);
}
void c16_23(int c, int r) {
  matrix.drawPixel(c, r+5, b);
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+12, b);
  matrix.drawPixel(c, r+13, b);
  matrix.drawPixel(c, r+15, b);
}
void c17_24(int c, int r) {
  matrix.drawPixel(c, r+5, b);
  matrix.drawPixel(c, r+11, b);
  matrix.drawPixel(c, r+12, b);
  matrix.drawPixel(c, r+15, b);
}
void c18_25(int c, int r) {
  matrix.drawPixel(c, r+5, b);
  matrix.drawPixel(c, r+10, b);
  matrix.drawPixel(c, r+11, b);
  matrix.drawPixel(c, r+15, b);
}
void c19_26(int c, int r) {
  matrix.drawPixel(c, r+5, b);
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+9, b);
  matrix.drawPixel(c, r+10, b);
  matrix.drawPixel(c, r+15, b);
}
void c20_27(int c, int r) {
  matrix.drawPixel(c, r+6, b);
  matrix.drawPixel(c, r+7, b);
  matrix.drawPixel(c, r+8, b);
  matrix.drawPixel(c, r+9, b);
  matrix.drawPixel(c, r+15, b);
}

void setup() {
  
  }
void loop() {
  int td = 25;
/*  long td1 = random(1, 4);
  switch(td1) {
    case 1:
      td = 25;
      break;
    case 2:
      td = 50;
      break;
    case 3:
      td = 75;
      break;
    default:
      td = 100;
  }*/
  matrix.begin();
  delay(1000);
  for(int x = 31; x >= -40; x--) {
    empty();
    c1_8(x, 0);
    c2_3_4_9_10_11(x + 1, 0);
    c2_3_4_9_10_11(x + 2, 0);
    c2_3_4_9_10_11(x + 3, 0);
    c5_12(x + 4, 0);
    c6_13(x + 5, 0);
    c1_8(x + 7, 0);
    c2_3_4_9_10_11(x + 8, 0);
    c2_3_4_9_10_11(x + 9, 0);
    c2_3_4_9_10_11(x + 10, 0);
    c5_12(x + 11, 0);
    c6_13(x + 12, 0);
    //33 /\
    //22 \/
    c15_22(x + 14, 0);
    c16_23(x + 15, 0);
    c17_24(x + 16, 0);
    c18_25(x + 17, 0);
    c19_26(x + 18, 0);
    c20_27(x + 19, 0);
    c15_22(x + 21, 0);
    c16_23(x + 22, 0);
    c17_24(x + 23, 0);
    c18_25(x + 24, 0);
    c19_26(x + 25, 0);
    c20_27(x + 26, 0);
    delay(td);
  }
}
