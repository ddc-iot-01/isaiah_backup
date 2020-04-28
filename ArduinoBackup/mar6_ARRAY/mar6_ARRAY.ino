//Isaiah
//3-6-20
#include <Adafruit_NeoPixel.h>
#include <colors.h>
#include <OneButton.h>

OneButton button1(23,false);

const int PIN=17;
const int NUMPIXELS=16;
int ledPin = 9;
int buttonstate = LOW;

Adafruit_NeoPixel pixels (NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

const int start_pixel = 0; // first pixel is 0
int counter = 0; // counter to keep track of pixel
int i = 0; // index for addressing colors

int colorarray[] = {red, orange, yellow, green, blue, indigo,violet};
int arraysize = 7;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  delay(250); // pause for Serial Monitor
  Serial.println("Starting NeoPixel");

  pixels.begin();
  pixels.clear();

  button1.attachClick(click1);
  button1.attachDoubleClick(doubleclick1);
  button1.setClickTicks(250);
  button1.setPressTicks(2000);

  Serial.print("Color array size = ");
  Serial.println(sizeof(colorarray)/4); // sizeof() returns size of array in bytes
                                        // for Teensy, int is 4-bytes
                                           
}

void loop() {
  // put your main code here, to run repeatedly:
  button1.tick();
  pixels.setBrightness(63);
  pixels.setPixelColor(counter, colorarray[i]);
  pixels.show();

{if (buttonstate == LOW){
  digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
  
}

void click1 () {
  Serial.println("Button 1 click.");
  counter++;
  if (counter == NUMPIXELS) {
    counter = 0;
    
}
  buttonstate=!buttonstate;
  Serial.print("Counter = ");
  Serial.println (counter);
  
}

void doubleclick1() {
  Serial.println("Button 1 doubleclick.");
  i++;
  if (i == arraysize) {
    i=0;
    
  }
  Serial.println("Index = ");
  Serial.println(i);
  
}
