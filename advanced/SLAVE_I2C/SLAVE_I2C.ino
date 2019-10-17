#include <Wire.h>

void setup() {
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop() {
  delay(100);
}

void receiveEvent(int howMany) {
  int x = Wire.read();
  Serial.println(x);
  analogWrite(6,x);
}
