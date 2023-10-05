/*
 * PB_Program.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */
#include "PB_cfg.h"
#include "PB_Interface.h"
#include "DIO_Interface.h"
#include "avr/delay.h"

void H_Void_GetPBValue(PBNum_t PB,PB_State_t *pState)
{
	static PB_State_t copy_u8state = PB_NOTPRESSED;

	u8 copy_u8PinVal;
	switch(PB){
		case PB1: M_Void_DIO_ReadChannel(PB1_PIN,&copy_u8PinVal);break;
		case PB2: M_Void_DIO_ReadChannel(PB2_PIN,&copy_u8PinVal);break;
		case PB3: M_Void_DIO_ReadChannel(PB3_PIN,&copy_u8PinVal);break;
		case PB4: M_Void_DIO_ReadChannel(PB4_PIN,&copy_u8PinVal);break;
		default:	break;
	}
	if(copy_u8PinVal == PB_PRESSED)   // in this case the button is pressed
	{
		_delay_ms(20);
		switch(PB){
			case PB1: M_Void_DIO_ReadChannel(PB1_PIN,&copy_u8PinVal);break;
			case PB2: M_Void_DIO_ReadChannel(PB2_PIN,&copy_u8PinVal);break;
			case PB3: M_Void_DIO_ReadChannel(PB3_PIN,&copy_u8PinVal);break;
			case PB4: M_Void_DIO_ReadChannel(PB4_PIN,&copy_u8PinVal);break;
			default:	break;
		}
		if(copy_u8PinVal == PB_PRESSED)
		{
			// check button previous state
			if(copy_u8state == PB_NOTPRESSED) // 1st press
			{
				copy_u8state = PB_PRESSED;
				* pState = PB_PRESSED;

			}
			else if(copy_u8state == PB_PRESSED)// trapped (long press)
			{
				* pState = PB_NOTPRESSED;

			}
			else
			{
				//nothing
			}
	}// 2nd read after delay
	else {//Noise
		* pState = PB_NOTPRESSED;
		copy_u8state = PB_NOTPRESSED;
	}

}// 1st read befor delay
else
{
	* pState = PB_NOTPRESSED;
	copy_u8state = PB_NOTPRESSED;
}

}

