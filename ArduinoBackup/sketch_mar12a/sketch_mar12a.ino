//Isaiah
//STOPWATCH
//3-12-20

#include <StopWatch.h> 
#include <u8glib.h>

int buttonA = 22;
int buttonB = 23;

U8GLIB_SH1106_128x64 u8g(13,11,10,9,8);

StopWatch sw_millis;
StopWatch sw_secs(StopWatch::SECONDS);

void draw(void){
  u8g.setFont(u8g_font_profont17yr)
  u8g.setPrintPos(0, 30);
  u8g.print("m");
  u8g.println(sw_millis.elapsed());
  
}

void setup() {
  // put your setup code here, to run once:
pinMode(buttonA, INPUT_PULLUP);
pinMode(buttonB, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if digitalRead(buttonA) == LOW){
      sw_millis.start();
}
  else if (digitalRead(buttonB) == LOW){
    sw_millis.stop();
  }
    sw_millis.reset();
  }
  u8g.firstPage();
  do {
      draw();
  } while(u8g.nextPage() );
    delay(1);
  }
