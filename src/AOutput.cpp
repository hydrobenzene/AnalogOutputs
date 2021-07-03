/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/hydrobenzene/Downloads/SummerClass/AnalogOutput/AOutput/src/AOutput.ino"
void setup();
void loop();
#line 1 "c:/Users/hydrobenzene/Downloads/SummerClass/AnalogOutput/AOutput/src/AOutput.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
   delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 0);
  analogWrite(D5, 128);
    delay(1000);
  analogWrite(D7, 128);
  analogWrite(D6, 0);
  analogWrite(D5, 0);
    delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 128);
  analogWrite(D5, 0);
}