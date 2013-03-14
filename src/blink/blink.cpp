/*
 * ARMatura book sample
 * https://github.com/ponyatov/ARMatura
*/

#include <SSAU.h> // используем Wiring-совместимую объектную библиотеку SSAU ASCL

void init() {
	STM_EVAL_LEDOff(LED3);
	STM_EVAL_LEDOff(LED4);
}

void loop() {
	if (STM_EVAL_PBGetState(BUTTON_USER)== SET) {
		STM_EVAL_LEDOn(LED4);
	} else {
		STM_EVAL_LEDOff(LED4);
	}
}
