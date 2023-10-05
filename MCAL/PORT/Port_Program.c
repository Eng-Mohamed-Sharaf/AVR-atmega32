/*
 * Port_Program.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */
/******************************************
  INCLUDES
*******************************************/
#include "STD_TYPES.h"
#include "BitMath.h"
#include "Port_Interface.h"
#include "Mcu_HW.h"


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


void Port_Init(const Port_ConfigType * ConfigPtr, int arr_size)
{

	if(ConfigPtr == NULL)
		{
			// To do Report Error
		}
		else
		{
			u8 i ;
			u8 Local_pin;
			u8 Local_port;
			for(i= 0;i<arr_size;i++)
			{
				Local_pin =(ConfigPtr[i].Port_PinNumber)%10 ;
				Local_port =(ConfigPtr[i].Port_PinNumber)/10 ;
				// step1 : set direction
				if(ConfigPtr[i].Port_PinDirection == PORT_PINDIR_INPUT || ConfigPtr[i].Port_PinDirection ==PORT_PINDIR_OUTPUT)
				{
					switch(Local_port)
					{
					case PORT_PORTA:DDRA_REG|= (u8)(ConfigPtr[i].Port_PinDirection<< Local_pin);break;
					case PORT_PORTB:DDRB_REG|= (u8)(ConfigPtr[i].Port_PinDirection<< Local_pin);break;
					case PORT_PORTC:DDRC_REG|= (u8)(ConfigPtr[i].Port_PinDirection<< Local_pin);break;
					case PORT_PORTD:DDRD_REG|= (u8)(ConfigPtr[i].Port_PinDirection<< Local_pin);break;

					}
					// step 2 : config initial pin value
					if(ConfigPtr[i].Port_PinLevelValue == PORT_PIN_LEVEL_LOW || ConfigPtr[i].Port_PinLevelValue == PORT_PIN_LEVEL_HIGH)
					{
						switch(Local_port)
						{
						case PORT_PORTA:  PORTA_REG |= (u8)(ConfigPtr[i].Port_PinLevelValue<< Local_pin);break;
						case PORT_PORTB:  PORTB_REG |= (u8)(ConfigPtr[i].Port_PinLevelValue<< Local_pin);break;
						case PORT_PORTC:  PORTC_REG |= (u8)(ConfigPtr[i].Port_PinLevelValue<< Local_pin);break;
						case PORT_PORTD:  PORTD_REG |= (u8)(ConfigPtr[i].Port_PinLevelValue<< Local_pin);break;

						}
						// step 3 : config Pin Internal Attach
						if(ConfigPtr[i].Port_PinInternalAttach == PORT_PIN_IN_ATTATCH_PULLUP && ConfigPtr[i].Port_PinDirection == PORT_PINDIR_INPUT )
						{
							switch(Local_port)
							{
							case PORT_PORTA:PORTA_REG |= (u8)(1<< Local_pin);break;
							case PORT_PORTB:PORTB_REG |= (u8)(1<< Local_pin);break;
							case PORT_PORTC:PORTC_REG |= (u8)(1<< Local_pin);break;
							case PORT_PORTD:PORTD_REG |= (u8)(1<< Local_pin);break;
							}
						}
						else
						{
							//report error
						}
					}
					else
					{
						// report Error
					}
				}
				else
				{
					//report error
				}

		    }//for
		}//else
}
