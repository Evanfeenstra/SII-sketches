int ledPin = 13;
int buttonPin = 0;
bool on = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
  if(digitalRead(buttonPin)==LOW){
    on = !on;
  }
  digitalWrite(ledPin, on);
}
