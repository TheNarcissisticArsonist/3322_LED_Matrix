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
unsigned short cB = matrix.Color333(0, 2, 7);
unsigned short y = matrix.Color333(7, 7, 0);
unsigned short rC = matrix.Color333(7, 2, 0);
unsigned short w = matrix.Color333(0, 0, 0);

void eagle(int c, int r) {
  /*
  matrix.drawPixel(c+1, r+0, rB); //Regular Blue DONE
  matrix.drawPixel(c+0, r+2, dB); //Dark Blue DONE
  matrix.drawPixel(c+0, r+4, cB); //Columbia Blue DONE
  matrix.drawPixel(c+4, r+5, y); //Yellow DONE
  matrix.drawPixel(c+6, r+7, rC); //Dark Red DONE
  matrix.drawPixel(c+6, r+3, w); //White
  */
  matrix.drawPixel(c+0, r+2, dB);
  matrix.drawPixel(c+0, r+4, cB);
  matrix.drawPixel(c+0, r+6, rB);
  matrix.drawPixel(c+0, r+9, dB);
  
  matrix.drawPixel(c+1, r+1, rB);
  matrix.drawPixel(c+1, r+3, dB);
  matrix.drawPixel(c+1, r+4, cB);
  matrix.drawPixel(c+1, r+5, cB);
  matrix.drawPixel(c+1, r+6, rB);
  matrix.drawPixel(c+1, r+7, rB);
  matrix.drawPixel(c+1, r+8, dB);
  matrix.drawPixel(c+1, r+9, dB);
  
  matrix.drawPixel(c+2, r+2, rB);
  matrix.drawPixel(c+2, r+3, dB);
  matrix.drawPixel(c+2, r+4, dB);
  matrix.drawPixel(c+2, r+5, cB);
  matrix.drawPixel(c+2, r+7, rB);
  matrix.drawPixel(c+2, r+8, dB);
  
  matrix.drawPixel(c+3, r+1, cB);
  matrix.drawPixel(c+3, r+2, cB);
  matrix.drawPixel(c+3, r+3, rB);
  matrix.drawPixel(c+3, r+4, dB);
  matrix.drawPixel(c+3, r+5, dB);
  matrix.drawPixel(c+3, r+6, cB);
  matrix.drawPixel(c+3, r+7, rB);
  matrix.drawPixel(c+3, r+8, dB);
  matrix.drawPixel(c+3, r+9, rB);
  matrix.drawPixel(c+3, r+10, cB);
  matrix.drawPixel(c+3, r+15, y);
  
  matrix.drawPixel(c+4, r+0, cB);
  matrix.drawPixel(c+4, r+5, y);
  matrix.drawPixel(c+4, r+6, dB);
  matrix.drawPixel(c+4, r+7, rB);
  matrix.drawPixel(c+4, r+8, dB);
  matrix.drawPixel(c+4, r+9, rB);
  matrix.drawPixel(c+4, r+13, rC);
  matrix.drawPixel(c+4, r+14, y);
  
  matrix.drawPixel(c+5, r+4, y);
  matrix.drawPixel(c+5, r+5, y);
  matrix.drawPixel(c+5, r+7, dB);
  matrix.drawPixel(c+5, r+8, dB);
  matrix.drawPixel(c+5, r+9, rB);
  matrix.drawPixel(c+5, r+12, rC);
  matrix.drawPixel(c+5, r+13, rC);
  matrix.drawPixel(c+5, r+14, y);
  matrix.drawPixel(c+5, r+15, y);
  
  matrix.drawPixel(c+6, r+3, w);
  matrix.drawPixel(c+6, r+4, w);
  matrix.drawPixel(c+6, r+5, y);
  matrix.drawPixel(c+6, r+7, rC);
  matrix.drawPixel(c+6, r+8, rC);
  matrix.drawPixel(c+6, r+9, dB);
  matrix.drawPixel(c+6, r+11, rC);
  matrix.drawPixel(c+6, r+12, rC);
  
  matrix.drawPixel(c+7, r+3, w);
  matrix.drawPixel(c+7, r+4, cB);
  matrix.drawPixel(c+7, r+5, w);
  matrix.drawPixel(c+7, r+6, rC);
  matrix.drawPixel(c+7, r+7, rC);
  matrix.drawPixel(c+7, r+8, rC);
  matrix.drawPixel(c+7, r+9, rC);
  matrix.drawPixel(c+7, r+10, rC);
  matrix.drawPixel(c+7, r+11, rC);
  
  matrix.drawPixel(c+8, r+3, w);
  matrix.drawPixel(c+8, r+4, w);
  matrix.drawPixel(c+8, r+5, w);
  matrix.drawPixel(c+8, r+6, rC);
  matrix.drawPixel(c+8, r+7, rC);
  matrix.drawPixel(c+8, r+8, rC);
  matrix.drawPixel(c+8, r+9, rC);
  matrix.drawPixel(c+8, r+10, rC);
  matrix.drawPixel(c+8, r+11, rC);
  
  matrix.drawPixel(c+9, r+4, w);
  matrix.drawPixel(c+9, r+5, w);
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
  matrix.drawPixel(c+10, r+14, y);
  matrix.drawPixel(c+10, r+15, y);
  
  matrix.drawPixel(c+11, r+0, cB);
  matrix.drawPixel(c+11, r+6, dB);
  matrix.drawPixel(c+11, r+7, rB);
  matrix.drawPixel(c+11, r+8, dB);
  matrix.drawPixel(c+11, r+9, rB);
  matrix.drawPixel(c+11, r+13, rC);
  matrix.drawPixel(c+11, r+14, y);
  
  matrix.drawPixel(c+12, r+1, cB);
  matrix.drawPixel(c+12, r+2, cB);
  matrix.drawPixel(c+12, r+3, rB);
  matrix.drawPixel(c+12, r+4, dB);
  matrix.drawPixel(c+12, r+5, dB);
  matrix.drawPixel(c+12, r+6, cB);
  matrix.drawPixel(c+12, r+7, rB);
  matrix.drawPixel(c+12, r+8, dB);
  matrix.drawPixel(c+12, r+9, rB);
  matrix.drawPixel(c+12, r+10, cB);
  matrix.drawPixel(c+12, r+15, y);
  
  matrix.drawPixel(c+13, r+2, rB);
  matrix.drawPixel(c+13, r+3, dB);
  matrix.drawPixel(c+13, r+4, dB);
  matrix.drawPixel(c+13, r+5, cB);
  matrix.drawPixel(c+13, r+7, rB);
  matrix.drawPixel(c+13, r+8, dB);
  
  matrix.drawPixel(c+14, r+1, rB);
  matrix.drawPixel(c+14, r+3, dB);
  matrix.drawPixel(c+14, r+4, cB);
  matrix.drawPixel(c+14, r+5, cB);
  matrix.drawPixel(c+14, r+6, rB);
  matrix.drawPixel(c+14, r+7, rB);
  matrix.drawPixel(c+14, r+8, dB);
  matrix.drawPixel(c+14, r+9, dB);
  
  matrix.drawPixel(c+15, r+2, dB);
  matrix.drawPixel(c+15, r+4, cB);
  matrix.drawPixel(c+15, r+6, rB);
  matrix.drawPixel(c+15, r+9, dB);
}

void setup() {
  matrix.begin();
  eagle(0, 0);
}
void loop() {
  
}
