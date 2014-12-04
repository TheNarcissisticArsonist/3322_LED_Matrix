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

//Change picture[][ ][3] below to the number of columns in the drawing. Leave the first one blank!
void drawPicture(unsigned char picture[][ ][3], int row, int col, int width, int height) {
  for(int i=0; i<height; i++) {
    for(int j=0; j<width; j++) {
      matrix.drawPixel(col+j, row+i, (int)matrix.Color333(picture[i][j][0], (int)picture[i][j][1], (int)picture[i][j][2]));
    }
  }
}

void setup() {
  matrix.begin();
  //Insert arguments based off variable names and the function definition above
  drawPicture( , 0, 0, , );
}
void loop() {

}
