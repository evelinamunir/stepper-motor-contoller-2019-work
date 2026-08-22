#include <Stepper.h>
#define STEPS 2038
Stepper stepper(STEPS, 8, 10, 9, 11);
int buttonPin = 5;
int buttonPin2 = 6;
int buttonState = 0;
int buttonState2 = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState == LOW) {
    stepper.setSpeed(11);
    stepper.step(STEPS);
    delay(500);
  }

  if (buttonState2 == LOW) {
    stepper.setSpeed(11);
    stepper.step(-STEPS);
    delay(500);
  }
}
