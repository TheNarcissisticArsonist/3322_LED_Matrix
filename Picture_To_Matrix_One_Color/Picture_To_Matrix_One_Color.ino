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
// | The variable name used in this program is picture[][][], but you can change it.
/* V

*/

//Change picture[][ ][3] below to the number of columns in the drawing. Leave the first one blank!
void drawPictureSingleColor(unsigned char picture[][ ][3], int row, int col, int width, int height, int colorR, int colorG, int colorB) {
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  unsigned short color = matrix.Color333(colorR, colorG, colorB);
  for(int i=0; i<height; i++) {
    for(int j=0; j<height; j++) {
      if(picture[i][j][0] > 0 && picture[i][j][1] > 0 && picture[i][j][2] > 0) {
        matrix.drawPixel(col+j, row+i, color);
      }
    }
  }
}

void setup() {
  matrix.begin();
  //Insert arguments based off variable names and the function definition above
  drawPictureSingleColor( , 0, 0, , );
}
void loop() {

}
