#include "SDS011.h"

float p10, p25;
int errorNumberStatus;
SDS011 particleCounter;

void setup() {
  particleCounter.begin(7, 6);
  Serial.begin(9600);
}

void loop() {
  Serial.println(millis());
  errorNumberStatus = particleCounter.read(&p25, &p10);
  if (errorNumberStatus == 1) {
    Serial.println("P2.5: " + String(p25));
    Serial.println("P10:  " + String(p10));
  } else {
    Serial.println("There was an error during the reading of the hardware.")
    Serial.println("Error value: " + String(errorNumberStatus));
  }
  delay(1000);
}
  
