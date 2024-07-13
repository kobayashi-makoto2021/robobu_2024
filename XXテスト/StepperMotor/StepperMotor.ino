#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 200

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to

Stepper stepper(STEPS, 8, 9, 10, 11); //正回転
// Stepper stepper(STEPS, 8, 9, 11, 10); //逆回転

// the previous reading from the analog input
// int previous = 0;

void setup() {
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(160);
}

void loop() {
  // get the sensor value
  // int val = analogRead(0);

  // move a number of steps equal to the change in the
  // sensor reading
  stepper.step(STEPS);

  // remember the previous value of the sensor
  // previous = val;
}