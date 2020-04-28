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
#include <OneButton.h>
 
OneButton button1(23, false);  
const int PIN= 17;
const int NUMPIXELS=4;
int ledPin = 5;
int buttonState = LOW;
int flash = LOW;
int counter = LOW;


Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

const int pixeldelay=2000;
const int start_pixel = 0; // first pixel 0
int i= 0; // counter variable 

void click1() {
  Serial.println("Button 1 click.");
  buttonState = !buttonState;
  Serial.print("buttonState = ");
  Serial.println(buttonState);
  
}


void doubleclick1() {
  Serial.println("Button 1 doubleclick.");
  flash = !flash;
  Serial.print("flash = ");
  Serial.println(flash);
}

void setup() {
  // initialize Serial Monitor
  Serial.begin(9600);
  while (!Serial);
  pinMode(ledPin,OUTPUT);
  delay(210); // pause for serial monitor
  Serial.println("Starting NeoPixel");
  // initialize NeoPixels
  pixels.begin();
  pixels.clear();

  button1.attachClick(click1);
  button1.attachDoubleClick(doubleclick1);
 // button1.attachLongPressStart(longPressStart1);
 // button1.attachLongPressStop(longPressStop1);
  //button1.attachDuringLongPress(longPress1);
  button1.setClickTicks(250);
  button1.setPressTicks(2000);

  if(Serial) Serial.println("Starting oneButtonLED...");

}

void loop() {
  // clear the pixels
  pixels.clear();
  delay(1000);
  button1.tick();
  
for(i=start_pixel; i<NUMPIXELS; i++) {

  Serial.print("Lighting up pixel ");
  Serial.println(i);
  pixels.setPixelColor(i,63,63,0);
  //pixels.setPixelColor(i,random(0,63),random(0,32),random(0,63));
  pixels.show(); //send pixels to hardware
  delay(pixeldelay); // the pause

  if (flash == LOW){
    if (buttonState == LOW) {
 
        digitalWrite(ledPin, HIGH);
      }
  
}
}
}



 
