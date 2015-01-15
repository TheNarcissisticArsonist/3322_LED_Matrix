#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short b  = matrix.Color333(0, 0, 0); //Black
unsigned short sB = matrix.Color333(0, 2, 7); //Skyline Blue
unsigned short rB = matrix.Color333(0, 0, 7); //Regular Blue
unsigned short g  = matrix.Color333(4, 7, 0); //Green
unsigned short o  = matrix.Color333(7, 5, 0); //Orange
unsigned short w  = matrix.Color333(7, 7, 7); //White
unsigned short p  = matrix.Color333(7, 0, 7); //Purple
unsigned short y  = matrix.Color333(7, 7, 0); //Yellow
unsigned short r  = matrix.Color333(7, 0, 0); //Red

//M
unsigned short c1[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c2[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c3[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c4[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c5[16] = {b, b, sB, sB, sB, sB, sB, sB, b, b, b, b, b, b, b, b};
unsigned short c6[16] = {b, b, sB, sB, sB, sB, sB, sB, b, b, b, b, b, b, b, b};
unsigned short c7[16] = {b, b, b, b, sB, sB, sB, sB, sB, sB, b, b, b, b, b, b};
unsigned short c8[16] = {b, b, b, b, sB, sB, sB, sB, sB, sB, b, b, b, b, b, b};
unsigned short c9[16] = {b, b, sB, sB, sB, sB, sB, sB, b, b, b, b, b, b, b, b};
unsigned short c10[16] = {b, b, sB, sB, sB, sB, sB, sB, b, b, b, b, b, b, b, b};
unsigned short c11[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c12[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c13[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};
unsigned short c14[16] = {sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB, sB};

unsigned short c15[16] = {b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b};

//A
unsigned short c16[16] = {b, b, b, r, r, r, r, r, r, r, r, r, r, r, r, r};
unsigned short c17[16] = {b, b, r, r, r, r, r, r, r, r, r, r, r, r, r, r};
unsigned short c18[16] = {b, r, r, r, r, r, r, r, r, r, r, r, r, r, r, r};
unsigned short c19[16] = {r, r, r, r, b, b, b, b, r, r, b, b, b, b, b, b};
unsigned short c20[16] = {r, r, r, r, b, b, b, b, r, r, b, b, b, b, b, b};
unsigned short c21[16] = {r, r, r, r, b, b, b, b, r, r, b, b, b, b, b, b};
unsigned short c22[16] = {r, r, r, r, b, b, b, b, r, r, b, b, b, b, b, b};
unsigned short c23[16] = {b, r, r, r, r, r, r, r, r, r, r, r, r, r, r, r};
unsigned short c24[16] = {b, b, r, r, r, r, r, r, r, r, r, r, r, r, r, r};
unsigned short c25[16] = {b, b, b, r, r, r, r, r, r, r, r, r, r, r, r, r};

unsigned short c26[16] = {b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b};

//K
unsigned short c27[16] = {g, g, g, g, g, g, g, g, g, g, g, g, g, g, g, g};
unsigned short c28[16] = {g, g, g, g, g, g, g, g, g, g, g, g, g, g, g, g};
unsigned short c29[16] = {g, g, g, g, g, g, g, g, g, g, g, g, g, g, g, g};
unsigned short c30[16] = {b, b, b, b, b, b, g, g, g, g, b, b, b, b, b, b};
unsigned short c31[16] = {b, b, b, b, g, g, g, g, g, g, g, g, b, b, b, b};
unsigned short c32[16] = {b, b, b, b, g, g, g, g, g, g, g, g, b, b, b, b};
unsigned short c33[16] = {b, b, g, g, g, g, b, b, b, b, g, g, g, g, b, b};
unsigned short c34[16] = {b, b, g, g, g, g, b, b, b, b, g, g, g, g, b, b};
unsigned short c35[16] = {g, g, g, g, b, b, b, b, b, b, b, b, g, g, g, g};
unsigned short c36[16] = {g, g, g, g, b, b, b, b, b, b, b, b, g, g, g, g};

unsigned short c37[16] = {b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b};

//E
unsigned short c38[16] = {o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o};
unsigned short c39[16] = {o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o};
unsigned short c40[16] = {o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o};
unsigned short c41[16] = {o, o, b, b, b, b, b, o, o, b, b, b, b, b, o, o};
unsigned short c42[16] = {o, o, b, b, b, b, b, o, o, b, b, b, b, b, o, o};
unsigned short c43[16] = {o, o, b, b, b, b, b, o, o, b, b, b, b, b, o, o};
unsigned short c44[16] = {o, o, b, b, b, b, b, o, o, b, b, b, b, b, o, o};
unsigned short c45[16] = {o, o, b, b, b, b, b, o, o, b, b, b, b, b, o, o};
unsigned short c46[16] = {o, o, b, b, b, b, b, b, b, b, b, b, b, b, o, o};
unsigned short c47[16] = {o, o, b, b, b, b, b, b, b, b, b, b, b, b, o, o};

unsigned short c48[16] = {b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b};


void setup() {
  matrix.begin();
}
void loop() {
  
}