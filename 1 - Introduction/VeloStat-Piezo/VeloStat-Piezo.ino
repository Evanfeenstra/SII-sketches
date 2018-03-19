int buzzPin = A5;
int velo = 0;
int store = 0;
int threshhold = 15;

void setup() {
  Serial.begin(9600);
}

void loop() {
  store = velo;
  velo = analogRead(A0);
  Serial.println(velo);
  
  if(abs(velo-store)>threshhold) {
    tone(buzzPin, velo);
  } else {
    noTone(buzzPin);
  }

  delay(50);
}
