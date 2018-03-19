int ledPin = 13;

void setup() {               
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);   
}

void loop() {
  int light = analogRead(18);
  Serial.println(light);
  digitalWrite(ledPin, HIGH);   
  //delay(light);               
  digitalWrite(ledPin, LOW);
  //delay(light);
  delay(10);               
}
