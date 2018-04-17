int ledPin = 11;
float R;

void setup() {
  pinMode(ledPin, OUTPUT);
  R = (1023 * log10(2))/(log10(255));   
}
void loop() {
  int light = analogRead(A0);
  int brightness = pow(2, (light / R)) - 1;  
  analogWrite(ledPin, brightness);                 
}
