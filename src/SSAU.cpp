/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */

#include <SSAU.h>

LED::LED(Led_TypeDef x) {
	id=x;
	STM_LEDinit(x);
	LED::off();
}

void LED::toggle(void)  { STM_LEDtoggle(id); }
void LED::on(void) 			{ STM_LEDon(id); }
void LED::off(void) 		{ STM_LEDoff(id); }

#ifdef STM32VLDISCOVERY
LED LD3(LED3),LD4(LED4);
#endif // STM32VLDISCOVERY

void pinMode(LED l,IOMODE m) {	}

void digitalWrite(LED d,LEVEL l) { if (l) d.on(); else d.off(); }

uint16_t volatile DelayCounter=0;
void delay(uint16_t ms) {
	DelayCounter=ms;
	while (DelayCounter);
}

uint16_t SysTick_Handler_1second=0;
void SysTick_Handler(void) { 
	if (DelayCounter) DelayCounter--;
	if (SysTick_Handler_1second) SysTick_Handler_1second--; 
		else {SysTick_Handler_1second=1000; tick1s(); }
}

int main() // classical Wiring main()
{
	// board init
	/* Configure LED3 and LED4 on Discovery boards */
#ifdef STM32VLDISCOVERY
//	LD3.init(LED3); LD4.init(LED4);
#endif // STM32VLDISCOVERY
	//	STM_LEDinit(LED3);
//	STM_LEDinit(LED4);
	/* Initialize User_Button on Discovery boards */
	STM_PBinit(BUTTON_USER, BUTTON_MODE_GPIO);
	
	/* SysTick end of count event each 1ms */
	RCC_ClocksTypeDef RCC_Clocks;
	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.HCLK_Frequency/1000); // tick every 1 ms

	// applet init
	setup();
	// applet mainloop
	for(;;) loop();
//	return 0;
}

