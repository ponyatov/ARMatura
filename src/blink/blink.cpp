/*
 * ARMatura book sample
 * https://github.com/ponyatov/ARMatura
*/

#include <SSAU.h> // используем Wiring-совместимую объектную библиотеку SSAU ASCL

void init() {
	STM_LEDoff(LED3);
	STM_LEDoff(LED4);
}

void loop() {
	if (STM_PBget(BUTTON_USER)== SET) {
		STM_LEDon(LED4);
	} else {
		STM_LEDoff(LED4);
	}
}
