/*
 * Port_Lcfg.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */

/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"
#include "Port_Types.h"
#include "Port_Cfg.h"


/******************************************
  Local Macros / Functions
*******************************************/


/******************************************
  Local Data
*******************************************/

/******************************************
  Global Data
*******************************************/

const Port_ConfigType PORT_Config_Arr[]= {

											   /*LED*/
												{PORT_PA6,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},
												{PORT_PA5,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},
												{PORT_PA4,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},
												{PORT_PB7,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_OUTPUT,
												PORT_PIN_IN_ATTATCH_PULLUP},

												/*PB*/
												{PORT_PD3,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_FLOATING},
												{PORT_PD5,
												PORT_PIN_LEVEL_LOW,
												PORT_PINDIR_INPUT,
												PORT_PIN_IN_ATTATCH_FLOATING},


																				};
