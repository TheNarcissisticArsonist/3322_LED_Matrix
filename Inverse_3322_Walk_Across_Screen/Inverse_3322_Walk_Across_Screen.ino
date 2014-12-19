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

//2s
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
  delay(1000);
  for(int x = 31; x >= -40; x--) {
    empty();
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
    delay(td);
  }
}
