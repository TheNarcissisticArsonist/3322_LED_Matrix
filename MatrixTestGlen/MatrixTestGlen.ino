#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2

RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void setup()
{
 matrix.setCursor(1, 0);
 matrix.setTextSize(1);
 matrix.begin();
}
void loop()
{
 for(int x = 1; x < 66; x++) {
 matrix.setCursor(x, 0);
 matrix.setTextColor(matrix.Color333(0,0,0));
 matrix.print('S');
 matrix.print('k');
 matrix.print('y');
 matrix.print('l');
 matrix.print('i');
 matrix.print('n');
 matrix.print('e');
 delay(100);
 matrix.fillRect(0, 0, 32, 16, matrix.Color333(1, 2, 3));
}
}
