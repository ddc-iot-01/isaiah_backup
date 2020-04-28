/* 
 * Project: Using OneButton library
 * Description: Introduct Students to OneButton Library using a button and the serial monitor
 * Author: Isaiah
 * Date: 3-3-20
 */

#include <OneButton.h>

// Setup OneButton on pin 23

// Create variables buttonState and flash

int buttonState = LOW;
int flash = LOW;
int led = 9
OneButton button1(23,false);

void setup() {
  
    Serial.begin(9600);
    while(!Serial);
    button1.attachClick(click1);
    button1.attachDoubleClick(doubleclick1);
   // button1.attachLongPressStart(longPressSart1);
   // button1.attachLongPressStop(longPressStop1);
    button1.setClickTicks(250);
    button1.setPressTicks(2000);
  
    if(Serial) Serial.println("Sarting OneButton...");
}
// Setup Serial Monitor
// Link oneButton library to functions click1, doubleclick1, longPressStart1

void loop() {
  // keep watching the push buttons:
  button1.tick();

 if
   (buttonState == LOW){
   digitalWrite(led,LOW);
}

 else
 {
   
   (buttonState == HIGH); 
   digitalWrite(led,LOW);

 }
} 
 // loop

// ----- button 1 callback functions

// This function will be called when the button1 was pressed 1 time.
 void click1() {
//change and print buttonState
  Serial.println("button1 Click.");
  buttonState = !buttonState;
  Serial.print("buttonState =");
  Serial.println(buttonState);
  
} // click1


// This function will be called when the button1 was pressed 2 times in a short timeframe.
void doubleclick1() {
// change state of flash and print
  Serial.println("Button 1 doubleclick.");
  flash = !flash;
  Serial.print("flash = ");
  Serial.println(flash);
  
} // doubleclick1


// This function will be called often, when the button1 is pressed for a long time.
void longPressStart1() {
    Serial.println("button1 LongPress start");
// print longPress
} // longPressStart1

void Longpress1() {
    Serial.println("button1 LongPress...");
} //longPress 1

  // this function will be called once, when the button1 is released after being pressed for a long time
  void LongPressStop1() {
      Serial.println("button1 LongPress stop");
      //longPressStop1
}
