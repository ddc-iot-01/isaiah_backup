/*Isaiah
 * Project: NeoPixel
 * Description: Learn to use NeoPixels
 * Author:
 * Date:
 */

/* ASSIGNMENT
 * In your labbooks, draw the layout for 4 NeoPixels 
 * Transfer the layout for Fritzing
 * Go to the layout tab and clean up the schematic
 * Wire up your board
 * Write code to light up 4 NeoPixels
 */

// Define NeoPixel constants
#include <Adafruit_NeoPixel.h>
 
const int PIN= 17;
const int NUMPIXELS=100;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

const int pixeldelay=2000;
const int start_pixel = 0; // first pixel 0
int i= 0; // counter variable 


void setup() {
  // initialize Serial Monitor
  Serial.begin(9600);
  delay(500); // pause for serial monitor
  Serial.println("Starting NeoPixel");
  // initialize NeoPixels
  pixels.begin();
  pixels.clear();
}

void loop() {
  // clear the pixels
  pixels.clear();
  delay(1000);

for(i=start_pixel; i<NUMPIXELS; i++) {

  Serial.print("Lighting up pixel ");
  Serial.println(i);
  pixels.setPixelColor(i,99,54,0);
  pixels.setPixelColor(i,random(0,25),random(0,20),random(0,120));
  pixels.show(); //send pixels to hardware
  delay(pixeldelay); // the pause
}
}


  // for loop to reference each pixel
  // set the color
  // use pixels.show() to update the pixels
