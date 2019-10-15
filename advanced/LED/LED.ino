void setup() {
  // put your setup code here, to run once:
  //3,6,9,10,11 can only use for analogwrite
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3, 0);
  delay(1000);
  analogWrite(3, 50);
  delay(1000);
  analogWrite(3, 100);
  delay(1000);
  analogWrite(3, 150);
  delay(1000);
}
