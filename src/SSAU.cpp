/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */

#include <SSAU.h>

int main() // classical Wiring main()
{
	// board init
	/* Configure LED3 and LED4 on Discovery boards */
	STM_LEDinit(LED3);
	STM_LEDinit(LED4);
	/* Initialize User_Button on Discovery boards */
	STM_PBinit(BUTTON_USER, BUTTON_MODE_GPIO);
	
//		/* SysTick end of count event each 1ms */
//		RCC_ClocksTypeDef RCC_Clocks;
//		RCC_GetClocksFreq(&RCC_Clocks);
//		SysTick_Config(RCC_Clocks.HCLK_Frequency / 1000);
  
	// applet init
	init();
	// applet mainloop
	for(;;) loop();
//	return 0;
}

