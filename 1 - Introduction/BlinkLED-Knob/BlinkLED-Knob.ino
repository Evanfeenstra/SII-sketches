int ledPin = 13;

void setup() {               
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);   
}

void loop() {
  int knob = analogRead(A0);
  Serial.println(knob);
  digitalWrite(ledPin, HIGH);   
  delay(knob);               
  digitalWrite(ledPin, LOW);
  delay(knob);               
}
