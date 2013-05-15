#include <rotary.h>

Rotary r = Rotary(2, 3);

void setup() {
  Serial.begin(9600);
  attachInterrupt(0, callback, CHANGE);
  attachInterrupt(1, callback, CHANGE);
}

void loop() {

}

void callback() {
  unsigned char result = r.process();
  if (result) {
    Serial.println(result == DIR_CW ? "Right" : "Left");
  }
}
