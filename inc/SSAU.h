/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */
 
#ifndef __SSAU_
#define __SSAU_

#include <stdint.h>

#include <WConstants.h>

class xPIN {
};

class xLED{
};

void pinMode(xPIN,xIOMODE);

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
	#define STM_LEDinit(X)  STM32vldiscovery_LEDInit(X)
	#define STM_PBinit(X,Y) STM32vldiscovery_PBInit(X,Y)
	#define STM_LEDoff(X)   STM32vldiscovery_LEDOff(X)
	#define STM_LEDon(X)    STM32vldiscovery_LEDOn(X)
	#define STM_PBget(X)		STM32vldiscovery_PBGetState(X)
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
	
	extern xLED LD3;//,LD4,LD5,LD6;
	#define WLED LD3
#endif // STM32F4DISCOVERY

// classical Wiring interface functions for user applet
void setup(void);
void loop(void);

// interrupt handlers
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);

// Wiring realization

class LED {
};

#endif // __SSAU_
