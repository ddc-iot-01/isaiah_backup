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
#include <OneButton.h>

int flash = LOW;
int counter = LOW;
const int PIN=17;
const int NUMPIXELS=16;
int g=21;
int r=20;
//int sw=22;
int oldPosition = -999;
int newPosition;
int j;
int buttonstate =LOW;
//int arraysize = 7;
//int colorarray[] = {red, orange, yellow, green, blue, indigo,violet};
OneButton button1(22,false);
Adafruit_NeoPixel pixels(NUMPIXELS,PIN, NEO_GRB + NEO_KHZ800);

const int pixeldelay=2000;
const int start_pixel = 4;

int i=0;
void setup() {
   pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
 // pinMode(sw,OUTPUT);
  
// Turn on Serial Monitor
  Serial.begin(9600);
  while(!Serial);
    delay(500);
  Serial.println("Starting Neopixel");
  pixels.begin();
  pixels.clear();
  Serial.println("Basic Encoder Test:");
   button1.attachClick(click1);
  //  button1.attachDoubleClick(doubleclick1);
   // button1.attachLongPressStart(longPressSart1);
   // button1.attachLongPressStop(longPressStop1);
    button1.setClickTicks(250);
    button1.setPressTicks(1000);
  
    if(Serial) Serial.println("Sarting OneButton...");
}

void loop() {
    button1.tick();
  digitalRead(buttonstate);
 if
 
   (buttonstate == HIGH){
   digitalWrite(g,HIGH);
   digitalWrite(r,LOW);
   // Read encoder position
// Display to screen if changed
  newPosition = myEnc.read();
  i=start_pixel+(newPosition/8);
 
    Serial.println(newPosition);
      pixels.clear();
  delay(50);

for(j=start_pixel; j<i;j++) {
  
  Serial.print("Lighting up pixel");
  Serial.println(j);
  pixels.setPixelColor(j,red);
  pixels.show();
  delay(newPosition);
    
  }
  
   }
   
  else
      (buttonstate == LOW);
      digitalWrite(r,HIGH);
      digitalWrite(g,LOW);
    }

 void click1() {

//change and print buttonState
  Serial.println("button1 Click.");
  buttonstate = !buttonstate;
  Serial.print("buttonState =");
//  Serial.println(buttonState);
 }

  void doubleclick1() {
  Serial.println("Button 1 doubleclick.");
  flash = !flash;
  Serial.print("flash = ");
  Serial.println(flash);
} // doubleclick1
