//Serial monitor
//Isaiah W.
//2-27-20

int ledDelay = 1000; //1000 ms or 1 s
int i;

void setup() {

  //Enable Serial Monitor
  Serial.begin (9600);
  while (!Serial);  //wait for serial monitor 
  Serial.println ("Ready to Go");
}

void loop() {

  for (i=0; i <=13; i++){
  Serial.println(i);
  delay(ledDelay);
  }
  }
