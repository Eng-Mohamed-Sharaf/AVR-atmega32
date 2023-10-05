/*
 * Port_Interface.h
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */

#ifndef MCAL_PORT_INC_PORT_INTERFACE_H_
#define MCAL_PORT_INC_PORT_INTERFACE_H_

/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"
#include "Port_Types.h"
#include "Port_cfg.h"

/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL DATA TYPES AND STRUCTURES
*******************************************/



/******************************************
   GLOBAL FUNCTIONS PROTOTYPES
*******************************************/

/******************************************
  syntax : void Port_Init(const Port_ConfigType * ConfigPtr);

  Description :

  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant
  parameters (in)  :
  parameters (out) : none
  Return Value     : void
******************************************/
void Port_Init(const Port_ConfigType * ConfigPtr,  int arr_size);

#endif /* MCAL_PORT_INC_PORT_INTERFACE_H_ */
