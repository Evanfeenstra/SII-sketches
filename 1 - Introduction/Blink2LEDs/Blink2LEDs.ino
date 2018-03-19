int ledPin = 13;
int ledPin2 = 2;
bool on = true;

void setup() {                
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);     
}

void loop() {
  digitalWrite(ledPin, on);
  digitalWrite(ledPin2, !on); 
  delay(100);               
  on = !on;          
}

