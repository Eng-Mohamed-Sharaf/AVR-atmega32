/*
 * DIO_Program.c
 *
 *  Created on: Oct 4, 2023
 *      Author: Sharaf
 */


/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"
#include "BitMath.h"
#include "Dio_Interface.h"
#include "MCU_HW.h"


/******************************************
  Local Macros / Functions
*******************************************/


/******************************************
  Local Data
*******************************************/



/******************************************
  Global Data
*******************************************/





/******************************************
  Local Functions
*******************************************/


/******************************************
  Global Functions
*******************************************/

void M_Void_DIO_WriteChannel(Dio_ChannelType ChannelID,Dio_LevelType Level)
{
	u8 Local_u8Port = ChannelID/10;
	u8 Local_u8Pin = ChannelID%10;
	switch(Level)
	{
		case DIO_HIGH:		//SET
			switch(Local_u8Port)
			{
				case DIO_PORTA: SET_BIT(PORTA_REG,Local_u8Pin);break;
				case DIO_PORTB: SET_BIT(PORTB_REG,Local_u8Pin);break;
				case DIO_PORTC: SET_BIT(PORTC_REG,Local_u8Pin);break;
				case DIO_PORTD: SET_BIT(PORTD_REG,Local_u8Pin);break;
			}
			break;
		case DIO_LOW:		//CLR
			switch(Local_u8Port)
			{
				case DIO_PORTA: CLR_BIT(PORTA_REG,Local_u8Pin);break;
				case DIO_PORTB: CLR_BIT(PORTB_REG,Local_u8Pin);break;
				case DIO_PORTC: CLR_BIT(PORTC_REG,Local_u8Pin);break;
				case DIO_PORTD: CLR_BIT(PORTD_REG,Local_u8Pin);break;			}
			break;
		}
}

void M_Void_DIO_ReadChannel(Dio_ChannelType ChannelID,Dio_LevelType *pLevel)
{
	u8 Local_u8Port = ChannelID/10;
	u8 Local_u8Pin = ChannelID%10;
	switch(Local_u8Port)
	{
		case DIO_PORTA: *pLevel = GET_BIT(PINA_REG,Local_u8Pin);break;
		case DIO_PORTB: *pLevel = GET_BIT(PINB_REG,Local_u8Pin);break;
		case DIO_PORTC: *pLevel = GET_BIT(PINC_REG,Local_u8Pin);break;
		case DIO_PORTD: *pLevel = GET_BIT(PIND_REG,Local_u8Pin);break;
	}
}

void M_Void_DIO_WritePort(Dio_PortType PortID,Dio_PortLevelType Level)
{
	switch(PortID)
	{
		case DIO_PORTA: PORTA_REG = Level;break;
		case DIO_PORTB: PORTB_REG = Level;break;
		case DIO_PORTC: PORTC_REG = Level;break;
		case DIO_PORTD: PORTD_REG = Level;break;
	}
}

void M_Void_DIO_ReadPort(Dio_PortType PortID,Dio_PortLevelType *pLevel)
{
	switch(PortID)
	{
		case DIO_PORTA: *pLevel = PORTA_REG;break;
		case DIO_PORTB: *pLevel = PORTB_REG;break;
		case DIO_PORTC: *pLevel = PORTC_REG;break;
		case DIO_PORTD: *pLevel = PORTD_REG;break;
	}

}

void M_Void_DIO_TogChannel(Dio_ChannelType ChannelID)
{
	u8 Local_u8Port = ChannelID/10;
	u8 Local_u8Pin = ChannelID%10;
	switch(Local_u8Port)
	{
		case DIO_PORTA: TOG_BIT(PORTA_REG,Local_u8Pin);break;
		case DIO_PORTB: TOG_BIT(PORTB_REG,Local_u8Pin);break;
		case DIO_PORTC: TOG_BIT(PORTC_REG,Local_u8Pin);break;
		case DIO_PORTD: TOG_BIT(PORTD_REG,Local_u8Pin);break;
	}
}
