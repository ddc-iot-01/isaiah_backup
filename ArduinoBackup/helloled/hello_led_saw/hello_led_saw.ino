//connect anode of led to pin 5
// connect cathode of led to gnd with 220 ohm resistor


int ledgreen=9;
int ledblue=6;
int ledred=5;
int ledDelay = 1000; //100ms or 1s


void setup() {
  // put your setup code here, to run once:
pinMode(ledgreen,OUTPUT);
pinMode(ledblue,OUTPUT);
pinMode(ledred,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(ledblue,255);
delay(500);
analogWrite(ledblue,255);
delay(1000);
analogWrite(ledgreen,255);
delay(3000);
analogWrite(ledgreen,255);
delay(50);
analogWrite(ledred,255);
delay(50);
analogWrite(ledred,255);
delay(50);
}
