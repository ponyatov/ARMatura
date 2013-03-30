/*
 * ARMatura book sample
 * https://github.com/ponyatov/ARMatura
*/

#include <SSAU.h> // используем Wiring-совместимую
                  // объектную библиотеку SSAU ASCL

void tick1s() {
	XLED.toggle();
}

void setup() {
	pinMode(WLED, OUTPUT); // set pin LD3 as output
	pinMode(XLED, OUTPUT); // set pin LD4 as output
}

void loop() {
	digitalWrite(XLED, HIGH);
	while (1)
		if (btnUSER.pressed())
			digitalWrite(WLED, HIGH);
		else
			digitalWrite(WLED, LOW);
	digitalWrite(WLED, HIGH); 		// set the LED on
	delay(777); 					// wait for a second
	digitalWrite(WLED, LOW); 		// set the LED off
	delay(777); 					// wait for a second
}
