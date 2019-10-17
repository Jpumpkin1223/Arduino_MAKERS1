
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int sensorValue = analogRead(A0);
  sensorValue= map(sensorValue, 0, 1023, 0, 255);
  Serial.println(sensorValue);
  analogWrite(3,sensorValue);
}
