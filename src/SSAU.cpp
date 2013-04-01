/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */

#include <SSAU.h>

// BUTTON class

BUTTON::BUTTON() {
	STM_PBinit(BUTTON_USER, BUTTON_MODE_GPIO);
}

bool BUTTON::pressed(void) {
	return STM_PBget(BUTTON_USER);
}

BUTTON btnUSER;

// LED class

LED::LED(Led_TypeDef x) {
	id = x;
	STM_LEDinit(x);
	LED::off();
}

void LED::toggle(void) {
	STM_LEDtoggle(id);
}
void LED::on(void) {
	STM_LEDon(id);
}
void LED::off(void) {
	STM_LEDoff(id);
}

LED LD3(LED3), LD4(LED4);
#ifdef STM32VLDISCOVERY
#endif // STM32VLDISCOVERY
#ifdef STM32F4DISCOVERY
LED LD5(LED5),LD6(LED6);
#endif // STM32F4DISCOVERY
void pinMode(LED l, IOMODE m) {
}

void digitalWrite(LED d, LEVEL l) {
	if (l)
		d.on();
	else
		d.off();
}

// delay-related functions

#define uS_PER_SECOND 1000000UL
#define uS_PER_MS        1000UL
#define MS_PER_SECOND    1000UL

volatile uint32_t millis_counter = 0;
uint32_t millis(void) {
	return millis_counter;
}

uint32_t volatile delay_counter = 0;
void delay(uint16_t ms) {
	delay_counter = ms;
	while (delay_counter)
		;
}

uint16_t SysTick_Handler_1s = MS_PER_SECOND;
void SysTick_Handler(void) {
	if (delay_counter)
		delay_counter--;
	millis_counter++;
	if (SysTick_Handler_1s)
		SysTick_Handler_1s--;
	else {
		SysTick_Handler_1s = MS_PER_SECOND; // reload counter
		tick1s(); // call applet handler
	}
}

// classical Wiring main() + some hw init

int main() {
	// applet init
	setup();
	/* start SysTick _after_ applet init */
	RCC_ClocksTypeDef RCC_Clocks;
	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.HCLK_Frequency / MS_PER_SECOND); // tick every 1 ms
	// applet mainloop
	for (;;)
		loop();
}

