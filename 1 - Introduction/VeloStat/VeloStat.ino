void setup() {
  Serial.begin(9600);
}
const float e = 2.71828;
void loop() {
  int force = analogRead(A0);
  float volts = force / 204.6;
  float inner = pow(e, volts+1.2);
  float grams = pow(inner, 1.515);
  float pounds = grams / 453.592;
  Serial.println(pounds);
  delay(100);
}
