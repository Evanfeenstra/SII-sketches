int ledPin = 13;
bool on = true;

void setup() {                
  pinMode(ledPin, OUTPUT);     
}

void loop() {
  digitalWrite(ledPin, on);   
  delay(100);               
  on = !on;          
}
