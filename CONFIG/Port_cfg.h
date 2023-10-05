/*
 * Port_cfg.h
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */

#ifndef CONFIG_PORT_CFG_H_
#define CONFIG_PORT_CFG_H_

/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"
#include "Port_Types.h"
#include "Dio_Types.h"

/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/
#define PORT_PINS_CONFIG_ARR_SIZE 6

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/
typedef struct {
	Port_PinType             Port_PinNumber; //PA0 or PA1...etc
	Port_LevelType           Port_PinLevelValue;// initial value of pin
    Port_PinDirectionType    Port_PinDirection; // input or output
	Port_InternalAttachType  Port_PinInternalAttach;//pull up or floating

}Port_ConfigType;

#endif /* CONFIG_PORT_CFG_H_ */
