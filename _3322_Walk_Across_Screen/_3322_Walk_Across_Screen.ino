#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short sB = matrix.Color333(0, 2, 7);

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

void drawCol(int c, int r, int column[], int length, unsigned short color[]) {
  for(int i=0; i<length; i++) {
    matrix.drawPixel(c, r + column[i], color[i]);
  }
}
void empty() {
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}

void setup() {
  
}
void loop() {
  matrix.begin();
  int dR = 0;
  int del = 40;
  delay(1000);
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
    
    delay(del);
    empty();
  }
}

