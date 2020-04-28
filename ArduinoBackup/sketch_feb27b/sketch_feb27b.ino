//Buttonz
//Isaiah .W
//

int ledDelay = 1000; // 1000 ms or 1 s
//connect to pin 23, add pull-down resistor to button terminal, vcc to other
int buttonPin = 23;
int buttonState; // variable to store button position
int ledgreen = 9;
int ledred = 4;
int ledblue = 5;
int ledwhite =6;
int High = 255;
int buttonPin2 = 22;
int buttonState2;
int i=0;
int j=0;
int buttonPin3 =21;
int buttonState3;

void setup() {
pinMode(buttonPin, INPUT);
pinMode(buttonPin2,INPUT);
pinMode(buttonPin3,INPUT);
pinMode(5,OUTPUT);
pinMode(9,OUTPUT);
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
//Enable Serial Monitor
Serial.begin (9600);
while(!Serial);
Serial.println ();
Serial.println ("Ready to go");


}

void loop() {
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH){
  Serial.println("Button is not pressed");
  digitalWrite (5,LOW);
  digitalWrite (4,LOW); 
}

else

{
  Serial.println("button is pressed");
  digitalWrite (5,HIGH);
  delay(500);

  
}


buttonState2 = digitalRead(buttonPin2);
if (buttonState2 == LOW){
  i++;
  for (j=0; j<i; j++){
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9,LOW);
    delay(200);
  }
}

{
  buttonState3 = digitalRead(buttonPin3); 
  if (buttonState3 == LOW)
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
  delay(250);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(350);
  }
  
}
