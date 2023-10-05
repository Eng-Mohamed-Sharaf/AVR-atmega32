/*
 * LED_Program.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */
#include "DIO_Interface.h"
#include "LED_Interface.h"
#include "LED_cfg.h"

void H_Void_LED_On(LedColor_t Led)
{
	switch(Led)
	{
		case YEL_LED:M_Void_DIO_WriteChannel(LED_YEL_PIN,DIO_HIGH);break;
		case BLU_LED:M_Void_DIO_WriteChannel(LED_BLU_PIN,DIO_HIGH);break;
		case GRN_LED:M_Void_DIO_WriteChannel(LED_GRN_PIN,DIO_HIGH);break;
		case RED_LED:M_Void_DIO_WriteChannel(LED_RED_PIN,DIO_HIGH);break;
		default:	break;
	}
}
void H_Void_LED_Off(LedColor_t Led)
{
	switch(Led)
	{
		case YEL_LED:M_Void_DIO_WriteChannel(LED_YEL_PIN,DIO_LOW);break;
		case BLU_LED:M_Void_DIO_WriteChannel(LED_BLU_PIN,DIO_LOW);break;
		case GRN_LED:M_Void_DIO_WriteChannel(LED_GRN_PIN,DIO_LOW);break;
		case RED_LED:M_Void_DIO_WriteChannel(LED_RED_PIN,DIO_LOW);break;
		default:	break;
	}
}
void H_Void_LED_Toggle(LedColor_t Led)
{
	switch(Led)
	{
		case YEL_LED:M_Void_DIO_TogChannel(LED_YEL_PIN);break;
		case BLU_LED:M_Void_DIO_TogChannel(LED_BLU_PIN);break;
		case GRN_LED:M_Void_DIO_TogChannel(LED_GRN_PIN);break;
		case RED_LED:M_Void_DIO_TogChannel(LED_RED_PIN);break;
		default:	break;
	}
}


