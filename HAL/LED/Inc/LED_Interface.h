/*
 * LED_Interface.h
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */

#ifndef HAL_LED_INC_LED_INTERFACE_H_
#define HAL_LED_INC_LED_INTERFACE_H_

#include "LED_Types.h"


void H_Void_LED_On(LedColor_t Led);
void H_Void_LED_Off(LedColor_t Led);
void H_Void_LED_Blink(LedColor_t Led);
void H_Void_LED_Toggle(LedColor_t Led);



#endif /* HAL_LED_INC_LED_INTERFACE_H_ */
