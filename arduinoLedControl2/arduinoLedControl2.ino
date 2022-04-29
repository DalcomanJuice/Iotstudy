void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT); 
}

void loop() {
  ;
  // put your main code here, to run repeatedly:
}

//시리얼 통신과 관련된 이벤트가 발생하면 자동으로 실행되는 함수
//루프에서 호출해도 되지만 .. 아두이노에서 제공해주는 이 함수에서 구현하는게 더 좋다
void serialEvent(){
    int val_R, val_G, val_B;

    //대신 값을 보낼 때 255, 255, 255 컴마를 기준으로 보내야 한다
    //모니터의 인풋을 통해서 보내준다.. 읽는 녀석이다
    //DIP형 RGB LED 짧은쪽에 전류 Input, 긴쪽이 전류 OUTPUT
    val_R = Serial.readStringUntil(',').toInt();
    val_G = Serial.readStringUntil(',').toInt();
    val_B = Serial.readStringUntil('\0').toInt();

    //val_R, G ,B 변수 값은 GPIO 9 ,10 ,,1번 단자를 통해 PWM 출력
    analogWrite(9, val_R);
    analogWrite(10, val_G);
    analogWrite(11, val_B);
}
