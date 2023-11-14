#include <Arduino.h>
#include "TwoNumbers.h"

TwoNumbers twoNumbers(1, 2);

void setup() {
  Serial.begin(115200);

  float x = 1;
  float y = 2;
  twoNumbers = TwoNumbers(x, y);
}

void loop() {
  Serial.print("x + y = ");
  Serial.println(twoNumbers.add());

  Serial.print("x - y = ");
  Serial.println(twoNumbers.subtract());

  Serial.print("x * y =");
  Serial.println(twoNumbers.multiply());

  Serial.print("x / y =");
  Serial.println(twoNumbers.divide());

  delay(1000);
}
