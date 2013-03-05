/*
 * SSAU ASCL cross-platform object library for embedded device development
 * (used UTF8 encoding for russian comments)
 * includes Wiring-compatibility layer for Arduino boards usage
 * */

#ifdef STM32VLDISCOVERY
	#ifndef STM32F10X_LD_VL
		#define STM32F10X_LD_VL
	#endif
#endif

#ifdef STM32F4DISCOVERY
	#ifndef STM32F40XX
		#define STM32F40XX
	#endif
#endif

#ifdef STM32F40XX
	#include <stm32f4xx.h> // сборка для STM32F4DISCOVERY
#endif

#ifdef STM32F10X_LD_VL
	#include <stm32f10x.h> // сборка для STM32VLDISCOVERY
#endif

// classical Wiring interface functions for user applet
void init(void);
void loop(void);
