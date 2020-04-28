//loops
//connect anode of red led to pin 5
//connect anode of blue to pin 6
//connect anode of green to pin 7
//conect cathode of each led to gnd with 220 ohm resistor

int ledPingreen = 9;
int ledPinblue = 6;
int ledPinred = 5;
int ledDelay = 10; // 1000ms or 1 s
int i;//counter


void setup() {
  // put your setup code here, to run once:
pinMode(ledPingreen,OUTPUT);
pinMode(ledPinblue,OUTPUT);
pinMode(ledPinred,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<256;i = i + 50){
analogWrite(ledPingreen,i);
analogWrite(ledPinblue,i);
analogWrite(ledPinred,i);
delay(ledDelay);

}

for(i=255;i>=0;i=i-10) {
  analogWrite(ledPingreen,i);
  analogWrite(ledPinblue,i);
  analogWrite(ledPinred,i);
  delay(ledDelay);
}

}
