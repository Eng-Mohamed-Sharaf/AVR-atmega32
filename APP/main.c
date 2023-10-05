/*
 * main.c
 *
 *  Created on: Oct 4, 2023
 *      Author: Sharaf
 */

#include "Mcu_HW.h"
#include "Std_Types.h"
#include "Port_interface.h"
#include "LED_Interface.h"
#include "PB_Interface.h"

extern const Port_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE];
u8 Read;
int main(void)
{
	Port_Init(PORT_Config_Arr,PORT_PINS_CONFIG_ARR_SIZE);
	while(1)
	{
		H_Void_GetPBValue(PB1,&Read);
		if(Read==PB_PRESSED)
		{
		H_Void_LED_On(GRN_LED);	//RED
		}
		H_Void_GetPBValue(PB2,&Read);
		if(Read==PB_PRESSED)
		{
		H_Void_LED_Off(GRN_LED);	//RED
		}

	}
}
