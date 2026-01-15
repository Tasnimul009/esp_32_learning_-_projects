#include <Arduino.h>

int led_pin = 2;
void setup() {
  pinMode(led_pin, OUTPUT);
}
void loop() {
  digitalWrite(led_pin, HIGH);
  delay(500);  // ON 0.5s
  digitalWrite(led_pin, LOW);
  delay(500);  // OFF 0.5s
}

