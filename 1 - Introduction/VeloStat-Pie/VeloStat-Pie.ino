int buzzPin = A5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int velo = analogRead(A0);
  Serial.println(velo);
  tone(buzzPin, velo);
  delay(100);
}
