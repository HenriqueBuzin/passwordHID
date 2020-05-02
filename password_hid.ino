#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(500);
  Keyboard.print("");
  delay(500);
  Keyboard.end();
}
