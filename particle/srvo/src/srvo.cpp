/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/ddcio_53lbz6j/Documents/particle/srvo/src/srvo.ino"
3 4 void setup();
#line 1 "c:/Users/ddcio_53lbz6j/Documents/particle/srvo/src/srvo.ino"
1 #include <SparkFun_Qwiic_Twist_Arduino_Library.h> 
1 #include <SparkFun_Qwiic_Twist_Arduino_Library.h> 2 TWIST twist; //Create instance of this object
3 4 void setup() { 
  5 Serial.begin(9600); 
  6 Serial.println("Qwiic Twist Example");
} 
 if(twist.begin() == false) 
{ 
   Serial.print("Twist does not appear to be connected."); 
   Serial.println("Please check wiring. Freezing..."); 
   while(true); 
   } 
 }