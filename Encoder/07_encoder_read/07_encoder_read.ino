//Isaiah
// Project: Encoder_Read
// Description: Learn to use an encoder by displaying position on Serial.monitor
// Author: 
 //Date: 3-6-20
// Include encoder library and set-up object

#include <Encoder.h>
#include <Adafruit_NeoPixel.h>
#include <colors.h>
Encoder myEnc(3,2);

const int PIN=17;
const int NUMPIXELS=16;
int g=21;
int r=20;
int sw=22;
int oldPosition = -999;
int newPosition;
int j;

Adafruit_NeoPixel pixels(NUMPIXELS,PIN, NEO_GRB + NEO_KHZ800);

const int pixeldelay=2000;
const int start_pixel = 4;
int i=0;

void setup() {
  pinMode (r,OUTPUT);
 // pinMode(g,OUTPUT);
  pinMode(sw,OUTPUT);
  
// Turn on Serial Monitor
  Serial.begin(9600);
  while(!Serial);
    delay(50);
  Serial.println("Starting Neopixel");
  pixels.begin();
  pixels.clear();
  Serial.println("Basic Encoder Test:");
}

void loop() {
  digitalWrite(r,HIGH);
//  digitalWrite(g,HIGH);
  digitalWrite(sw,HIGH);

  

// Read encoder position
// Display to screen if changed
  newPosition = myEnc.read();
  i=start_pixel+(newPosition/8);
 
    Serial.println(newPosition);
      pixels.clear();
 // delay(1000);

for(j=start_pixel; j<i;j++) {
  
  Serial.print("Lighting up pixel");
  Serial.println(j);
  pixels.setPixelColor(j,green);
  pixels.show();
 // delay(newPosition);
    
  }
}
