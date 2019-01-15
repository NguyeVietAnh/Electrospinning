/**
  ******************************************************************************
  * @file		delay.h
  * @author	Yohanes Erwin Setiawan
  * @date		10 January 2016
  ******************************************************************************
  */
	
#ifndef __STM32F1xx_HAL_DELAY_H
#define __STM32F1xx_HAL_DELAY_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f1xx_hal.h"

void DelayInit(void);
void DelayUs(uint32_t us);
void DelayMs(uint32_t ms);

#ifdef __cplusplus
}
#endif

#endif

/********************************* END OF FILE ********************************/
/******************************************************************************/
