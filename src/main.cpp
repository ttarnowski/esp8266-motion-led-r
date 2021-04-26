#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(5000);
  pinMode(D1, OUTPUT);
}

void loop() { digitalWrite(D1, digitalRead(D7)); }