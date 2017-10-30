int ledPin = 13;

void setup() {                
  pinMode(ledPin, OUTPUT);     
}

void loop() {
  digitalWrite(ledPin, HIGH);   
  delay(1000);               
  digitalWrite(ledPin, LOW);  d  
  delay(1000);               
}
