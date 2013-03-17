/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */
// <<< Use Configuration Wizard in Context Menu >>>  
 
#ifndef __SSAU_
#define __SSAU_

#include <stdint.h>

// <h> Clock

// <o> External Quartz Freq <8000000UL=> 8 MHz <16000000UL=> 16 MHz
#define HSE_VALUE ((uint32_t)8000000UL)
#define F_CPU HSE_VALUE

// <o> Internal RC generator <8000000UL=> 8 MHz
#define HSI_VALUE ((uint32_t)8000000UL)

// <o> Clock Source <0=> External <1=> Internal RC
#if 0
#define CLOCK_SOURCE HSE_VALUE
#else
#define CLOCK_SOURCE HSI_VALUE
#endif

// </h>

// <h> Wiring library

// <o> version <100=> 1.0.0
#define WIRING 100

// </h>

#ifdef STM32EMU103
	#ifndef STM32F10X_MD
		#define STM32F10X_MD
	#endif
	#include <stm32f10x.h>
	#include <stm32emu103.h>
	#define STM_LEDinit(X)  STM32emu103_LEDInit(X)
	#define STM_PBinit(X,Y) STM32emu103_PBInit(X,Y)
	#define STM_LEDoff(X)   STM32emu103_LEDOff(X)
	#define STM_LEDon(X)    STM32emu103_LEDOn(X)
	#define STM_PBget(X)		STM32emu103_PBGetState(X)
#endif // STM32EMU103

#ifdef STM32F0DISCOVERY
  #ifndef STM32F0XX
		#define STM32F0XX
	#endif
	#include <stm32f0xx.h>
	#include <stm32f0_discovery.h>
	#define STM_LEDinit(X)  STM_EVAL_LEDInit(X)
	#define STM_PBinit(X,Y) STM_EVAL_PBInit(X,Y)
	#define STM_LEDoff(X)   STM_EVAL_LEDOff(X)
	#define STM_LEDon(X)    STM_EVAL_LEDOn(X)
	#define STM_PBget(X)		STM_EVAL_PBGetState(X)
#endif // STM32F0DISCOVERY

#ifdef STM32VLDISCOVERY
	#ifndef STM32F10X_LD_VL
		#define STM32F10X_LD_VL
	#endif
	#include <stm32f10x.h>
	#include <STM32vldiscovery.h>
	#include "stm32f10x_it.h"
	#define STM_LEDinit(X)  	STM32vldiscovery_LEDInit(X)
	#define STM_PBinit(X,Y) 	STM32vldiscovery_PBInit(X,Y)
	#define STM_LEDoff(X)   	STM32vldiscovery_LEDOff(X)
	#define STM_LEDon(X)    	STM32vldiscovery_LEDOn(X)
	#define STM_LEDtoggle(X)	STM32vldiscovery_LEDToggle(X)
	#define STM_PBget(X)			STM32vldiscovery_PBGetState(X)
#endif // STM32VLDISCOVERY

#ifdef STM32F4DISCOVERY 
	#ifndef STM32F40XX
		#define STM32F40XX
	#endif
	#include <stm32f4xx.h>
	#include <stm32f4_discovery.h>
	#define STM_LEDinit(X)  STM_EVAL_LEDInit(X)
	#define STM_PBinit(X,Y) STM_EVAL_PBInit(X,Y)
	#define STM_LEDoff(X)   STM_EVAL_LEDOff(X)
	#define STM_LEDon(X)    STM_EVAL_LEDOn(X)
	#define STM_PBget(X)		STM_EVAL_PBGetState(X)
#endif // STM32F4DISCOVERY

// classical Wiring interface functions for user applet
void setup(void);
void loop(void);
// extra functions for user applet
void tick1s(void);	// runs on every second

#include <WConstants.h>

class PIN {
};

class LED {
		Led_TypeDef id;
	public:
		LED(Led_TypeDef x);
		void toggle(void);
		void on(void);
		void off(void);
};

#ifdef STM32VLDISCOVERY
	extern LED LD3,LD4;
	#define WLED LD3
	#define XLED LD4
#endif // STM32VLDISCOVERY

void pinMode(LED,IOMODE);
void digitalWrite(LED,LEVEL);

void delay(uint16_t ms);

#endif // __SSAU_
