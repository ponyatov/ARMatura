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
	#include "stm32f0_discovery.h"
#endif // STM32F0DISCOVERY

#ifdef STM32VLDISCOVERY
	#ifndef STM32F10X_LD_VL
		#define STM32F10X_LD_VL
	#endif
	#include "STM32vldiscovery.h"
	
/* Includes ------------------------------------------------------------------*/
//#include "misc.h" /* High level functions for NVIC and SysTick (add-on to CMSIS functions) */
/* Uncomment the line below to enable peripheral header file inclusion */
//#include "stm32f10x_adc.h"
//#include "stm32f10x_bkp.h"
//#include "stm32f10x_can.h"
//#include "stm32f10x_crc.h"
//#include "stm32f10x_dac.h"
//#include "stm32f10x_dbgmcu.h"
//#include "stm32f10x_dma.h"
//#include "stm32f10x_exti.h"
//#include "stm32f10x_flash.h"
//#include "stm32f10x_fsmc.h"
#include "stm32f10x_gpio.h"
//#include "stm32f10x_i2c.h"
//#include "stm32f10x_iwdg.h"
//#include "stm32f10x_pwr.h"
//#include "stm32f10x_rcc.h"
//#include "stm32f10x_rtc.h"
//#include "stm32f10x_sdio.h"
//#include "stm32f10x_spi.h"
//#include "stm32f10x_tim.h"
//#include "stm32f10x_usart.h"
//#include "stm32f10x_wwdg.h"
	
#endif // STM32VLDISCOVERY

#ifdef STM32F4DISCOVERY 
	#ifndef STM32F40XX
		#define STM32F40XX
	#endif
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
