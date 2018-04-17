void setup() {
  Serial.begin(9600);
}

void loop() {
  int force = analogRead(A5);
  float volts = force / 204.6; // 1023/5
  int grams = pow(pow(2.718, volts+1.2), 1.515);
  float pounds = grams / 453.59;
  Serial.println(pounds);
  delay(10);
}
