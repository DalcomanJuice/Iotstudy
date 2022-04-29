
//tone 의 소리 주파수
const int note_C = 262;
const int note_D = 294;
const int note_E = 330;
const int note_F = 349;
const int note_G = 392;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH)
    tone(9, note_C);
  else if(digitalRead(3) == HIGH)
    tone(9, note_D);
  else if(digitalRead(4) == HIGH)
    tone(9, note_E);
  else if(digitalRead(5) == HIGH)
    tone(9, note_F);
  else if(digitalRead(6) == HIGH)
    tone(9, note_G);
  else
    noTone(9);
  
}
