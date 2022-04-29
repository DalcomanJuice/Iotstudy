void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //시리얼 통신을 9600bps로 시작한다. 시리얼 통신 초기화 함수
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_A0, val_A1;

  val_A0 = analogRead(0);
  val_A1 = analogRead(1);

  Serial.print(val_A0); //개행문자를 제외하여 시리얼 송신 [모니터로 송신하네]
  Serial.print(' ');
  Serial.print(val_A1); //개행문자를 추가하여 시리얼 송신

  delay(1000);
}
