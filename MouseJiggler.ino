#include "PluggableUSBHID.h"
#include "USBMouse.h"

USBMouse Mouse;

long counter = 0;

int radius = 20;
int x = 0;
int y = 0;

void setup() {
}

void loop() {
  // The coordinates here approximate a circle.
  // yeah, there's got to be a way to use a circle formula (x^2 + y^2 = r^2) but this works too
  Mouse.move(-10, 0);
  delay(100);
  Mouse.move(-9, 4);
  delay(100);
  Mouse.move(-7, 7);
  delay(100);
  Mouse.move(-5, 9);
  delay(100);
  Mouse.move(-3, 10);
  delay(100);
  Mouse.move(3, 10);
  delay(100);
  Mouse.move(5, 9);
  delay(100);
  Mouse.move(9, 5);
  delay(100);
  Mouse.move(10, 2);
  delay(100);
  Mouse.move(10, -1);
  delay(100);
  Mouse.move(8, -6);
  delay(100);
  Mouse.move(6, -8);
  delay(100);
  Mouse.move(4, -9);
  delay(100);
  Mouse.move(1, -10);
  delay(100);
  Mouse.move(-1, -10);
  delay(100);
  Mouse.move(-4, -9);
  delay(100);
  Mouse.move(-7, -7);
  delay(100);
  Mouse.move(-9, -4);
  delay(100);
}
