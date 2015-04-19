/*
 * attiny84_pin_test.ino
 *
 * Test each GPIO on an ATTiny84 (or its smaller cousins) by flipping it high
 * for a second, then moving on to the next pin.
 *
 * I destroy a lot of hardware, so this is my attempt to get more testing
 * before I use a FUBAR componet. :P
 *
 * Author: Sean Caulfield <sean@yak.net>
 * License: GPLv2
 *
 */

#include<Arduino.h>

//
// ATMEL ATTINY84 / ARDUINO PIN MAPPING
//
//                         +-\/-+
//                   VCC  1|    |14  GND
//            (D10)  PB0  2|    |13  AREF (D0)
//             (D9)  PB1  3|    |12  PA1  (D1) 
//                   PB3  4|    |11  PA2  (D2) 
//   INT0  PWM (D8)  PB2  5|    |10  PA3  (D3) 
//         PWM (D7)  PA7  6|    |9   PA4  (D4) 
//         PWM (D6)  PA6  7|    |8   PA5  (D5) PWM
//                         +----+
//
// (Shamelessly swipped the pins_arduino.h for quick reference.)
//


const int DELAY = 1000;
const int PINS = 11;

void setup() {
  for (int i=0; i<PINS; i++) {
    pinMode(i, OUTPUT);
  }
}


void loop() {
  for (int i=0; i<PINS; i++) {
    digitalWrite(i, HIGH);
    delay(DELAY);
    digitalWrite(i, LOW);
  }
  delay(DELAY);
}
