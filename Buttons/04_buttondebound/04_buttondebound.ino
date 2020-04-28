/*
 * Project Debounce
 * Description: Button Demonstration with debound
 * Author: 
 * Date: 
 */

// Connect one pole of the button to pin 7
// Connect other pole to ground

int buttonPin = 23;              // button is connected to pin 7
boolean buttonRead;                 // variable for reading the pin status
boolean buttonState;                // variable to hold the button state
int n;                          // how many times the button has been pressed
boolean reading;
int lastbuttonState = LOW;

// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 20;    // the debounce time; increase if the output flickers

void setup() {
                                // Set the button to INPUT with PULLUP resistor

                                // Set up serial communication at 9600bps
                                // Wait for Serial port to start
  Serial.println("Counting how many times the botton is pressed");


}


void loop(){
  reading = digitalRead(buttonPin);      // read input value and store it in val 

}
