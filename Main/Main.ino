#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

char drawing;
char numDrawings; //Define this as the number of permutations it can do.

void drawPicture16C(char row, char col, char picture, char width, char height) {
  switch(picture) {
    case 1:
      //Iterate through picture 1
      break;
    case 2:
      //Iterate through picture 2
      break;
    //etc...
  }
}

void setup() {
  matrix.begin();
  //randomSeed(analogRead(5));
  //The above should create a random sequence every time.
  //It's not really necessary, but it could be useful.
}

void loop() {
  drawing = (char)random(1, numDrawings + 1);
  switch(drawing) {
    case 1:
      
      break;
    case 2:

      break;
    //...
    //...
    /*...
    case n:

      break;

    Where n is the number of drawings*/
  }
}
