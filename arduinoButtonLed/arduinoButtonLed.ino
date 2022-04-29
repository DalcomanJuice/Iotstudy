void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(12, INPUT); //입력을 의미함 GPIO 12번 단자를 인풋한다
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(12) == LOW){ //digitalRead 입력값을 읽어 그 값을 반환하는 함수
    digitalWrite(9, LOW);
  }
  else {
    digitalWrite(9, HIGH);
  }
}
