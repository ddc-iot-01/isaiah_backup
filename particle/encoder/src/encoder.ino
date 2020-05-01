/*
 * Project encoder
 * Description:
 * Author:
 * Date:
 */
#include <SparkFun_Qwiic_Twist_Arduino_Library.h> 
TWIST twist;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
Serial.begin(9600);
Serial.println("Qwiic Twist Example");
if(twist.begin() == false);
{
  Serial.print("Twist does not appear to be connected");
  Serial.println("Please check wiring. Freezing...");
  while(true);
  }
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}