#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel Matrix(A, B, C, CLK, LAT, OE, false);

//ONLY CAPITAL LETTERS!!! MAKE SURE THE CHARACTER HAS A MATCH BELOW!!!
char inputString[12] = "TEST STRING";
unsigned short colorArray[11] = {

};
int length = 11;

unsigned short letterA[12] = {8191, 16383, 32767, 61632, 61632, 61632, 61632, 32767, 16383, 8191, 0, 0};
unsigned short letterB[10] = {65535, 65535, 49539, 49539, 49539, 58311, 32766, 15996, 0, 0};
unsigned short letterC[12] = {32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 61455, 28686, 0, 0};
unsigned short letterD[12] = {65535, 65535, 65535, 49155, 49155, 49155, 57347, 32766, 16380, 4080, 0, 0};
unsigned short letterE[12] = {65535, 65535, 65535, 49539, 49539, 49539, 49539, 49539, 49155, 49155, 0, 0};
unsigned short letterF[13] = {65535, 65535, 65535, 49920, 49920, 49920, 49920, 49920, 49920, 49152, 49152, 0, 0};
unsigned short letterG[12] = {16380, 32766, 57351, 49155, 49155, 49347, 49347, 57543, 28927, 12542, 0, 0};
unsigned short letterH[12] = {65535, 65535, 65535, 896, 896, 896, 896, 65535, 65535, 65535, 0, 0};
unsigned short letterI[10] = {49155, 49155, 49155, 65535, 65535, 49155, 49155, 49155, 0, 0};
unsigned short letterJ[11] = {30, 49183, 49155, 49155, 49155, 65535, 65534, 49152, 49152, 0, 0};
unsigned short letterK[12] = {65535, 65535, 65535, 960, 4080, 4080, 15420, 15420, 61455, 61455, 0, 0};
unsigned short letterL[10] = {65535, 65535, 65535, 7, 7, 7, 7, 7, 0, 0};
unsigned short letterM[16] = {65535, 65535, 65535, 65535, 16128, 16128, 4032, 4032, 16128, 16128, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterN[14] = {65535, 65535, 65535, 30720, 7680, 1920, 480, 120, 30, 65535, 65535, 65535, 0, 0};
unsigned short letterO[14] = {8184, 32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 65535, 32766, 8184, 0, 0};
unsigned short letterP[11] = {65535, 65535, 65535, 49920, 49920, 49920, 59136, 32256, 15360, 0, 0};
unsigned short letterQ[12] = {16380, 32766, 61455, 57351, 49155, 49179, 57375, 61454, 32767, 16379, 0, 0};
unsigned short letterR[13] = {65535, 65535, 65535, 49920, 49920, 49920, 50048, 50112, 59391, 32511, 15487, 0, 0};
unsigned short letterS[14] = {15872, 32519, 62343, 57735, 57735, 57735, 57735, 57735, 57735, 57807, 57598, 124, 0, 0};
unsigned short letterT[16] = {49152, 49152, 49152, 49152, 49152, 65535, 65535, 49152, 49152, 49152, 49152, 49152, 0, 0};
unsigned short letterU[13] = {65528, 65534, 31, 7, 3, 3, 3, 7, 31, 65534, 65528, 0, 0};
unsigned short letterV[13] = {63488, 65024, 4032, 504, 63, 7, 63, 504, 4032, 65024, 63488, 0, 0};
unsigned short letterW[16] = {65535, 65535, 65535, 65535, 252, 252, 1008, 1008, 252, 252, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterX[10] = {57351, 63519, 7800, 2016, 2016, 7800, 63519, 57351, 0, 0};
unsigned short letterY[12] = {57344, 63488, 7680, 1920, 511, 511, 1920, 7680, 63488, 57344, 0, 0};
unsigned short letterZ[12] = {49183, 49215, 49267, 49379, 49603, 50051, 50947, 52739, 64515, 63491, 0, 0};
unsigned short space[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short letter0[12] = {16380, 32766, 57375, 49275, 49635, 51075, 56835, 63495, 32766, 16380, 0, 0};
unsigned short letter1[12] = {3, 4099, 12291, 28675, 65535, 65535, 3, 3, 3, 3, 0, 0};
unsigned short letter2[13] = {28687, 28703, 57407, 57471, 49395, 49635, 50115, 59267, 65283, 65027, 31747, 0, 0};
unsigned short letter3[14] = {12300, 28686, 57735, 49539, 49539, 49539, 49539, 49539, 49539, 58311, 32766, 15996, 0, 0};
unsigned short letter4[12] = {65280, 65280, 768, 768, 768, 768, 65535, 65535, 768, 768, 0, 0};
unsigned short letter5[14] = {65024, 65282, 49923, 49923, 49923, 49923, 49923, 49923, 49923, 50055, 49662, 49404, 0, 0};
unsigned short letter6[14] = {16380, 32766, 57799, 49539, 49539, 49539, 49539, 49539, 49539, 57799, 28926, 12412, 0, 0};
unsigned short letter7[14] = {49152, 49152, 49167, 49215, 49407, 50112, 50944, 52736, 56320, 63488, 61440, 57344, 0, 0};
unsigned short letter8[12] = {15996, 32766, 49539, 49539, 49539, 49539, 49539, 49539, 32766, 15996, 0, 0};
unsigned short letter9[10] = {32256, 65280, 59136, 49920, 49920, 59136, 65535, 65535, 0, 0};
unsigned short exclamation[4] = {65523, 65523, 0, 0};
unsigned short question[10] = {50163, 50163, 49920, 49920, 49920, 59163, 32256, 15360, 0, 0};
unsigned short period[4] = {3, 3, 0, 0};
unsigned short comma[4] = {7, 6, 0, 0};
unsigned short star[7] = {18432, 12288, 64512, 12288, 18432, 0, 0};
unsigned short slash[7] = {15, 255, 4080, 65280, 61440, 0, 0};
unsigned short minus[8] = {384, 384, 384, 384, 384, 384, 0, 0};
unsigned short plus[8] = {384, 384, 2016, 2016, 384, 384, 0, 0};
unsigned short equals[8] = {1632, 1632, 1632, 1632, 1632, 1632, 0, 0};

void drawString(char *str, unsigned short *color, int len, int leftCol) {
  int offset = 0;
  for(int i=0; i<len; i++) {
    switch(str[i]) {
      case 'A':
        drawLetter(letterA, 12, color[i], offset);
        offset+=12;
        break;
      case 'B':
        drawLetter(letterB, 10, color[i], offset);
        offset+=10;
        break;
      case 'C':
        drawLetter(letterC, 12, color[i], offset);
        offset+=12;
        break;
      case 'D':
        drawLetter(letterD, 12, color[i], offset);
        offset+=12;
        break;
      case 'E':
        drawLetter(letterE, 12, color[i], offset);
        offset+=12;
        break;
      case 'F':
        drawLetter(letterF, 13, color[i], offset);
        offset+=13;
        break;
      case 'G':
        drawLetter(letterG, 12, color[i], offset);
        offset+=12;
        break;
      case 'H':
        drawLetter(letterH, 12, color[i], offset);
        offset+=12;
        break;
      case 'I':
        drawLetter(letterI, 10, color[i], offset);
        offset+=10;
        break;
      case 'J':
        drawLetter(letterJ, 11, color[i], offset);
        offset+=11;
        break;
      case 'K':
        drawLetter(letterK, 12, color[i], offset);
        offset+=12;
        break;
      case 'L':
        drawLetter(letterL, 10, color[i], offset);
        offset+=10;
        break;
      case 'M':
        drawLetter(letterM, 16, color[i], offset);
        offset+=16;
        break;
      case 'N':
        drawLetter(letterN, 14, color[i], offset);
        offset+=14;
        break;
      case 'O':
        drawLetter(letterO, 14, color[i], offset);
        offset+=14;
        break;
      case 'P':
        drawLetter(letterP, 11, color[i], offset);
        offset+=11;
        break;
      case 'Q':
        drawLetter(letterQ, 12, color[i], offset);
        offset+=12;
        break;
      case 'R':
        drawLetter(letterR, 13, color[i], offset);
        offset+=13;
        break;
      case 'S':
        drawLetter(letterS, 14, color[i], offset);
        offset+=14;
        break;
      case 'T':
        drawLetter(letterT, 16, color[i], offset);
        offset+=16;
        break;
      case 'U':
        drawLetter(letterU, 13, color[i], offset);
        offset+=13;
        break;
      case 'V':
        drawLetter(letterV, 13, color[i], offset);
        offset+=13;
        break;
      case 'W':
        drawLetter(letterW, 16, color[i], offset);
        offset+=16;
        break;
      case 'X':
        drawLetter(letterX, 10, color[i], offset);
        offset+=10;
        break;
      case 'Y':
        drawLetter(letterY, 12, color[i], offset);
        offset+=12;
        break;
      case 'Z':
        drawLetter(letterZ, 12, color[i], offset);
        offset+=12;
        break;
      case ' ':
        drawLetter(space, 16, color[i], offset);
        offset+=16;
        break;
      case '0':
        drawLetter(letter0, 12, color[i], offset);
        offset+=12;
        break;
      case '1':
        drawLetter(letter1, 12, color[i], offset);
        offset+=12;
        break;
      case '2':
        drawLetter(letter2, 13, color[i], offset);
        offset+=13;
        break;
      case '3':
        drawLetter(letter3, 14, color[i], offset);
        offset+=14;
        break;
      case '4':
        drawLetter(letter4, 12, color[i], offset);
        offset+=12;
        break;
      case '5':
        drawLetter(letter5, 14, color[i], offset);
        offset+=14;
        break;
      case '6':
        drawLetter(letter6, 14, color[i], offset);
        offset+=14;
        break;
      case '7':
        drawLetter(letter7, 14, color[i], offset);
        offset+=14;
        break;
      case '8':
        drawLetter(letter8, 12, color[i], offset);
        offset+=12;
        break;
      case '9':
        drawLetter(letter9, 10, color[i], offset);
        offset+=10;
        break;
      case '!':
        drawLetter(exclamation, 4, color[i], offset);
        offset+=4;
        break;
      case '?':
        drawLetter(question, 10, color[i], offset);
        offset+=10;
        break;
      case '.':
        drawLetter(period, 4, color[i], offset);
        offset+=4;
        break;
      case ',':
        drawLetter(comma, 4, color[i], offset);
        offset+=4;
        break;
      case '*':
        drawLetter(star, 7, color[i], offset);
        offset+=7;
        break;
      case '/':
        drawLetter(slash, 7, color[i], offset);
        offset+=7;
        break;
      case '-':
        drawLetter(minus, 8, color[i], offset);
        offset+=8;
        break;
      case '+':
        drawLetter(plus, 8, color[i], offset);
        offset+=8;
        break;
      case '=':
        drawLetter(equals, 8, color[i], offset);
        offset+=8;
        break;
      default:
        Matrix.fillScreen(Matrix.Color333(7, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(0, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(7, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(0, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(7, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(0, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(7, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(0, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(7, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(0, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(7, 0, 0));
        delay(10);
        Matrix.fillScreen(Matrix.Color333(0, 0, 0));
        delay(10);
    }
  }
}

void drawLetter(unsigned short *col, char arrayLength, unsigned short color, int leftCol) {
  for(char column=0; column<arrayLength; column++) {
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

void setup() {
  Matrix.begin();
}
void loop() {
  drawString(inputString,  colorArray, length, 0);
}
