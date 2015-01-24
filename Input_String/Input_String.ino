#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel Matrix(A, B, C, CLK, LAT, OE, false);

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
unsigned short letterL
unsigned short letterM[16] = {65535, 65535, 65535, 65535, 16128, 16128, 4032, 4032, 16128, 16128, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterN[14] = {65535, 65535, 65535, 30720, 7680, 1920, 480, 120, 30, 65535, 65535, 65535, 0, 0};
unsigned short letterO[14] = {8184, 32766, 65535, 57351, 49155, 49155, 49155, 49155, 57351, 65535, 32766, 8184, 0, 0};
unsigned short letterP
unsigned short letterQ
unsigned short letterR[13] = {65535, 65535, 65535, 49920, 49920, 49920, 50048, 50112, 59391, 32511, 15487, 0, 0};
unsigned short letterS[14] = {15872, 32519, 62343, 57735, 57735, 57735, 57735, 57735, 57735, 57807, 57598, 124, 0, 0};
unsigned short letterT
unsigned short letterU
unsigned short letterV
unsigned short letterW[16] = {65535, 65535, 65535, 65535, 252, 252, 1008, 1008, 252, 252, 65535, 65535, 65535, 65535, 0, 0};
unsigned short letterX
unsigned short letterY
unsigned short letterZ
unsigned short space[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short letter0[12] = {16380, 32766, 57375, 49275, 49635, 51075, 56835, 63495, 32766, 16380, 0, 0};
unsigned short letter1[12] = {3, 4099, 12291, 28675, 65535, 65535, 3, 3, 3, 3, 0, 0};
unsigned short letter2[13] = {28687, 28703, 57407, 57471, 49395, 49635, 50115, 59267, 65283, 65027, 31747, 0, 0};
unsigned short letter3[14] = {12300, 28686, 57735, 49539, 49539, 49539, 49539, 49539, 49539, 58311, 32766, 15996, 0, 0};
unsigned short letter4
unsigned short letter5[14] = {65024, 65282, 49923, 49923, 49923, 49923, 49923, 49923, 49923, 50055, 49662, 49404, 0, 0};
unsigned short letter6[14] = {16380, 32766, 57799, 49539, 49539, 49539, 49539, 49539, 49539, 57799, 28926, 12412, 0, 0};
unsigned short letter7[14] = {49152, 49152, 49167, 49215, 49407, 50112, 50944, 52736, 56320, 63488, 61440, 57344, 0, 0};
unsigned short letter8[12] = {15996, 32766, 49539, 49539, 49539, 49539, 49539, 49539, 32766, 15996, 0, 0};
unsigned short letter9
unsigned short exclamation
unsigned short question
unsigned short period
unsigned short comma
unsigned short star
unsigned short slash
unsigned short minus
unsigned short plus
unsigned short equals*/

void setup() {
  Matrix.begin();
}
void loop() {
  
}