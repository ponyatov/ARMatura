// ARMatura book sample
// классическая миганка светодиодами

#include <SSAU.h> // используем Wiring-совместимую
                  // объектную библиотеку SSAU ASCL

#ifdef SAMPLE_BLINK

void tick1s() {
	XLED.toggle();
}

void setup() {
	pinMode(WLED, OUTPUT); // set pin LD3 as output
	pinMode(XLED, OUTPUT); // set pin LD4 as output
}

void loop() {
	digitalWrite(WLED, HIGH); // set the LED on
	delay(777);               // wait for a second
	digitalWrite(WLED, LOW);  // set the LED off
	delay(777);               // wait for a second
}

#endif
