/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */
 
#ifndef __SSAU_
#define __SSAU_

#include <stdint.h>

#ifdef STM32F0DISCOVERY
  #ifndef STM32F0XX
		#define STM32F0XX
	#endif
	#include <stm32f0xx.h>
	#include <stm32f0_discovery.h>
#endif // STM32F0DISCOVERY

#ifdef STM32VLDISCOVERY
	#ifndef STM32F10X_LD_VL
		#define STM32F10X_LD_VL
	#endif
	#include <STM32vldiscovery.h>
#endif // STM32VLDISCOVERY

#ifdef STM32F4DISCOVERY 
	#ifndef STM32F40XX
		#define STM32F40XX
	#endif
	#include <stm32f4xx.h>
	#include <stm32f4_discovery.h>
#endif // STM32F4DISCOVERY

// classical Wiring interface functions for user applet
void init(void);
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

#endif // __SSAU_
