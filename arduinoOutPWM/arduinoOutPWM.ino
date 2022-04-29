void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 255; i++){기
    analogWrite(9, i); //GPIO 9번 단자로 PWM 출력하
    delay(5);
  }

  for(int i = 255; i >=0; i--){
    analogWrite(9, i);
    delay(5);
  }
}
