#include <Bounce2.h>
int ledPin = 13;
int buttonPin = 0;
bool on = false;
Bounce button = Bounce(buttonPin, 5);

char list[5] = {'h','e','l','l','o'};

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
  button.update();
  if(button.fell()){
    on = !on;
  }
  digitalWrite(ledPin, on);
}



