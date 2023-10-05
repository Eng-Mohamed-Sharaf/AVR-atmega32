/*
 * PB_Types.h
 *
 *  Created on: Oct 5, 2023
 *      Author: Sharaf
 */

#ifndef HAL_PB_INC_PB_TYPES_H_
#define HAL_PB_INC_PB_TYPES_H_

typedef enum
{
	PB1=1,
	PB2,
	PB3,
	PB4
}PBNum_t;

typedef enum{
ACTIVE_HIGH,
ACTIVE_LOW
}PB_Active_t;
typedef enum
{
	PB_PRESSED,
	PB_NOTPRESSED
}PB_State_t;

#endif /* HAL_PB_INC_PB_TYPES_H_ */
