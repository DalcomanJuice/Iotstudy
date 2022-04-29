void setup() {
  // put your setup code here, to run once:
  pinMode(9 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_A0, val_G9; //단자 이름으로.. 변수 설정

  val_A0 = analogRead(0); //ANALOG IN 단자 번호..
  val_G9 = val_A0/1023.0*255.0; //A0 단자 범위 0 ~ 1023  , 0 ~ 255 값으로 변환, 정밀도 손실을 막기 위해서 .0 을 붙여서 실수로 바꿈
  
  analogWrite(9, val_G9);
}
