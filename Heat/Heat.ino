#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void drawPixel(int r, int c) {
  int cR = (int)random(0, 8);
  int cG = (int)random(0, 8);
  int cB = (int)random(0, 8);
  matrix.drawPixel(c, r, matrix.Color333(cR, cG, cB));
}
void onOff(int r, int c) {
  int cR = (int)random(0, 2);
  if(cR == 0) {
    matrix.drawPixel(c, r, matrix.Color333(0, 0, 0));
  }
  else {
    matrix.drawPixel(c, r, matrix.Color333(7, 7, 7));
  }
}

void setup() {
  matrix.begin();
}
void loop() {
  /*for(int i=0; i<32; i++) {
    for(int j=0; j<16; j++) {
      drawPixel(j, i);
    }
  }*/
  /*drawPixel((int)random(0, 16), (int)random(0, 32));*/
  /*onOff((int)random(0, 16), (int)random(0, 32));*/
}
