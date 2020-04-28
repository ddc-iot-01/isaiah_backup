int ledgreen = 9;
int ledblue = 5;
int ledred = 6;
int ledDelay = 50; //1000 ms or 1 s
float i;
int out;

void setup() {
  // put your setup code here, to run once:
pinMode(ledgreen,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
out =255*(0.5*sin(2*3.14159*i)+0.5);
analogWrite(ledPin,out);
i = i+0.01;
delay(ledDelay);
}
