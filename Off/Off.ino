#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void empty() {
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}

void setup() {
  matrix.begin();
  empty();
}
void loop() {
  
}
