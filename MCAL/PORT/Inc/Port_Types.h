/*
 * Port_Types.h
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */

#ifndef MCAL_PORT_INC_PORT_TYPES_H_
#define MCAL_PORT_INC_PORT_TYPES_H_
/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"

/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/
typedef enum{
	PORT_PA0 = 10,
	PORT_PA1 ,
	PORT_PA2 ,
	PORT_PA3 ,
	PORT_PA4 ,
	PORT_PA5 ,
	PORT_PA6 ,
	PORT_PA7 ,
	PORT_PB0 = 20,
	PORT_PB1 ,
	PORT_PB2 ,
	PORT_PB3 ,
	PORT_PB4 ,
	PORT_PB5 ,
	PORT_PB6 ,
	PORT_PB7 ,
	PORT_PC0 = 30,
	PORT_PC1 ,
	PORT_PC2 ,
	PORT_PC3 ,
	PORT_PC4 ,
	PORT_PC5 ,
	PORT_PC6 ,
	PORT_PC7 ,
	PORT_PD0 = 40,
	PORT_PD1 ,
	PORT_PD2 ,
	PORT_PD3 ,
	PORT_PD4 ,
	PORT_PD5 ,
	PORT_PD6 ,
	PORT_PD7

}Port_PinType;

typedef enum{
	PORT_PORTA=1,
	PORT_PORTB=2,
	PORT_PORTC=3,
	PORT_PORTD=4
}Port_PortType;
typedef enum{
	PORT_PINDIR_INPUT=0,
	PORT_PINDIR_OUTPUT=1
}Port_PinDirectionType;
typedef enum{
	PORT_PIN_IN_ATTATCH_PULLUP=0,
	PORT_PIN_IN_ATTATCH_FLOATING=1
}Port_InternalAttachType;

typedef enum{
	PORT_PIN_LEVEL_LOW=0,
	PORT_PIN_LEVEL_HIGH=1
}Port_LevelType;

#endif /* MCAL_PORT_INC_PORT_TYPES_H_ */
