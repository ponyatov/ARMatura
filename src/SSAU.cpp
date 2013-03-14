/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */

#include <SSAU.h>

/*
uint32_t volatile SystemTimer=0;
void SysTick_Handler(void)
{
	SystemTimer++;
}
*/

int main() // classical Wiring main()
{
	// board init
	#ifdef STM32F0DISCOVERY
	
		/* Configure LED3 and LED4 on STM32F0-Discovery */
		STM_EVAL_LEDInit(LED3);
		STM_EVAL_LEDInit(LED4);
  
		/* Initialize User_Button on STM32F0-Discovery */
		STM_EVAL_PBInit(BUTTON_USER, BUTTON_MODE_GPIO);

//		/* SysTick end of count event each 1ms */
//		RCC_ClocksTypeDef RCC_Clocks;
//		RCC_GetClocksFreq(&RCC_Clocks);
//		SysTick_Config(RCC_Clocks.HCLK_Frequency / 1000);
  
	#endif // STM32F0DISCOVERY
	// applet init
	init();
	// applet mainloop
	for(;;) loop();
//	return 0;
}

