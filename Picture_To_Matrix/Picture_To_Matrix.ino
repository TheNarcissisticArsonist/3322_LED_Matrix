#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

// | Insert the matrix from convertPictureToCode.py here
/* V

*/
double colorDivisor = 256/7;

//Change c below to the number of columns in the drawing
void drawPicture(int picture[][c][3], int row, int col, int width, int height) {
  for(int i=0; i<height; i++) {
    for(int j=0; j<width; j++) {
      matrix.drawPixel(col+j, row+i, matrix.Color333((int)picture[i][j][0]/colorDivisor, (int)picture[i][j][1]/colorDivisor, (int)picture[i][j][2]/colorDivisor));
    }
  }
}

void setup() {
  matrix.begin();
  drawPicture(yolo, 0, 0, yoloCols, yoloRows);
}
void loop() {

}
