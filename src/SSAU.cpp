/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */

#include <SSAU.h>

int main() // classical Wiring main()
{
	// board init
	#ifdef STM32F0DISCOVERY
		STM_EVAL_LEDInit(LED3);
		STM_EVAL_LEDInit(LED4);
		STM_EVAL_PBInit(BUTTON_USER,BUTTON_MODE_GPIO);
	#endif // STM32F0DISCOVERY
	// applet init
	init();
	// applet mainloop
	for(;;) loop();
//	return 0;
}

