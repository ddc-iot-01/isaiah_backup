/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/ddcio_53lbz6j/Documents/particle/helloworld/src/helloworld.ino"
/*
 * Project helloworld
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup();
void loop();
#line 9 "c:/Users/ddcio_53lbz6j/Documents/particle/helloworld/src/helloworld.ino"
void setup() {
  pinMode(D7,OUTPUT);
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  digitalWrite(D7,HIGH);
  delay(100);
  digitalWrite(D7,LOW);
  delay(100);
  // The core of your code will likely live here.

}