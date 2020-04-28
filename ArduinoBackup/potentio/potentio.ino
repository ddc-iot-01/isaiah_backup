//Isaiah
//potentiometer


int inPin =A0;
int inputDelay = 3000;
int inVal;
float inVolts;
int led = 9;
int ledDelay = 10;




void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
while(!Serial);

pinMode(inPin,INPUT);
pinMode,(led,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  inVal = analogRead(inPin);
  Serial.println(inVal);
  inVolts = in2volt(inVal);
  Serial.println(inVolts);
  delay(inputDelay);
  analogWrite(led,inVal);
  delay(ledDelay);
  


}

//if (inPin == HIGH)

  float in2volt(int inBits){
  float volts;
  volts = (inBits/1023.0)*3.3;
  return volts;
  }
  
