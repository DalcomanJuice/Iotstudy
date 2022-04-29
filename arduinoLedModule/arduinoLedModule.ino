#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 9

Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, PIN, NEO_RGB + NEO_KHZ800);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  strip.begin();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void serialEvent(){
  int val_pos, val_R, val_G, val_B;

  val_pos = Serial.readStringUntil(',').toInt(); //post 값은 LED 위치를 의미합니다
  val_R = Serial.readStringUntil(',').toInt();  //네오픽셀 원리 적용
  val_G = Serial.readStringUntil(',').toInt();
  val_B = Serial.readStringUntil('\0').toInt();

  strip.setPixelColor(val_pos, strip.Color(val_R, val_G, val_B)); //세팅해줘
  strip.show(); //네오픽셀 보여줘
  
  Serial.print(val_pos);
  Serial.print(' ');
  Serial.print(val_R);
  Serial.print(' ');
  Serial.print(val_G);
  Serial.print(' ');
  Serial.println(val_B);
}
