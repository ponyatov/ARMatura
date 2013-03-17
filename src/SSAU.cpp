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

// delay-related functions

#define uS_PER_SECOND 1000000UL
#define uS_PER_MS        1000UL
#define MS_PER_SECOND    1000UL

volatile uint32_t millis_counter=0;
uint32_t millis(void) {
	return millis_counter;
}

/*
uint32_t micros(void) { // have no idea how to make prec timings: DWT is too small
	return millis()*uS_PER_MS;
}
*/

uint32_t volatile delay_counter=0;
void delay(uint16_t ms) {
	delay_counter = ms;
	while (delay_counter);
}

/*
uint32_t TICKS_PER_uS=0;
void delayMicroseconds(uint32_t us) {
}
*/

uint16_t SysTick_Handler_1s = MS_PER_SECOND;
void SysTick_Handler(void) {
	if (delay_counter) delay_counter--;
	millis_counter++;
	if (SysTick_Handler_1s) SysTick_Handler_1s--;
		else {
			SysTick_Handler_1s = MS_PER_SECOND; // reload counter
			tick1s(); // call applet handler
		}
}

int main() // classical Wiring main()
{
	// board init
	/* Initialize User_Button on Discovery boards */
	STM_PBinit(BUTTON_USER, BUTTON_MODE_GPIO);
	
	/* SysTick end of count event each 1ms */
	RCC_ClocksTypeDef RCC_Clocks;
	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.HCLK_Frequency/MS_PER_SECOND); // tick every 1 ms
	
	/*
	// enable DWT counter for micros()
	TICKS_PER_uS = RCC_Clocks.SYSCLK_Frequency/uS_PER_SECOND;
	if (!(CoreDebug->DEMCR & 0x01000000)) {
		CoreDebug->DEMCR |= 0x01000000;
		//DWT->CYCCNT = 0; // zero counter
		DWT->CTRL |= 1 << DWT_CTRL_CYCCNTENA_Pos; // enable counter
	}
	*/

	// applet init
	setup();
	// applet mainloop
	for(;;) loop();
}

