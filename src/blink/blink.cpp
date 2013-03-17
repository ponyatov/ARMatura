/*
 * ARMatura book sample
 * https://github.com/ponyatov/ARMatura
*/

#include <SSAU.h> // используем Wiring-совместимую объектную библиотеку SSAU ASCL

void tick1s() {
	XLED.toggle();
}

void setup()
{
  pinMode(WLED, OUTPUT);  // set pin as output
}

void loop()
{
  digitalWrite(WLED, HIGH);  // set the LED on
  delay(1000);               // wait for a second
  digitalWrite(WLED, LOW);   // set the LED off
  delay(1000);               // wait for a second
}
