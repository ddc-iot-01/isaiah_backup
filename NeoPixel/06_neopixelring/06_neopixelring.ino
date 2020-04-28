/*Isaiah
 * Project: NeoPixel
 * Description: Learn to use NeoPixels
 * Author:
 * Date:
 */

/* ASSIGNMENT
 * Now add in the NeoPixel ring to your drawing and Fritizing (save as different file)
 * In your labbooks, draw the layout for 4 NeoPixels
 * Transfer the layout for Fritzing
 * Go to the layout tab and clean up the schematic
 * Write code to light up 16 NeoPixels 
 */

// Define NeoPixel constants
#include <Adafruit_NeoPixel.h>
#include <colors.h>

const int PIN=17;
const int NUMPIXELS=16;

Adafruit_NeoPixel pixels(NUMPIXELS,PIN, NEO_GRB + NEO_KHZ800);

const int pixeldelay=2000;
const int start_pixel = 0;
int i=0;




void setup() {
  // initialize Serial Monitor
  Serial.begin(9600);
  delay(500);
  Serial.println("Starting Neopixel");
  pixels.begin();
  pixels.clear();
  // initialize NeoPixels
}

void loop() {
  // clear the pixels
  pixels.clear();
  delay(1000);

for(i=start_pixel; i<NUMPIXELS; i++) {
  
Serial.print("Lighting up pixel");
Serial.println(i);
pixels.setPixelColor(i,random(0,85),random(0,26),random(0,120));
pixels.show();
delay(pixeldelay);
}
}

  // for loop to reference each pixel
  // set the color
  // use pixels.show() to update the pixels
