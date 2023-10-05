/*
 * DIO_Interface.h
 *
 *  Created on: Oct 4, 2023
 *      Author: Sharaf
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_
/******************************************
  INCLUDES
*******************************************/

#include <DIO_Types.h>

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
  GLOBAL DATA PROTOTYPES
*******************************************/

/******************************************
   GLOBAL FUNCTIONS PROTOTYPES
*******************************************/
/******************************************
  syntax : M_Void_DIO_DirChannel

  Description :	Function that control the direction of pin (Input or Output)

  Synch/Asynch     : synchronous
  Reentrance       : Reentrant
  parameters (in)  : Dio_ChannelType,Dio_LevelType
  parameters (out) : N/A
  Return Value     : void
******************************************/
void M_Void_DIO_DirChannel(Dio_ChannelType ChannelID,Dio_DirType Dir);

/******************************************
  syntax : M_Void_DIO_WriteChannel

  Description :	Function that control the value of pin (High or Low)

  Synch/Asynch     : synchronous
  Reentrance       : Reentrant
  parameters (in)  : Dio_ChannelType,Dio_LevelType
  parameters (out) : N/A
  Return Value     : void
******************************************/
void M_Void_DIO_WriteChannel(Dio_ChannelType ChannelID,Dio_LevelType Level);

/******************************************
  syntax : M_Void_DIO_ReadChannel

  Description :	Function that read the value of pin (High or Low)

  Synch/Asynch     : synchronous
  Reentrance       : Reentrant
  parameters (in)  : Dio_ChannelTyp,Dio_LevelType
  parameters (out) : N/A
  Return Value     : void
******************************************/
void M_Void_DIO_ReadChannel(Dio_ChannelType ChannelID,Dio_LevelType *pLevel);

/******************************************
  syntax : M_Void_DIO_WriteChannel

  Description :	Function that control the direction of port (input or output)

  Synch/Asynch     : synchronous
  Reentrance       : Reentrant
  parameters (in)  : Dio_PortType,Dio_PortLevelType
  parameters (out) : N/A
  Return Value     : void
******************************************/
void M_Void_DIO_WritePort(Dio_PortType PortID,Dio_PortLevelType Level);

/******************************************
  syntax : M_Void_DIO_ReadPort

  Description :	Function that read the value of Port (High or Low)

  Synch/Asynch     : synchronous
  Reentrance       : Reentrant
  parameters (in)  : Dio_PortType,Dio_PortLevelType
  parameters (out) : N/A
  Return Value     : void
******************************************/
void M_Void_DIO_ReadPort(Dio_PortType PortID,Dio_PortLevelType *pLevel);

/******************************************
  syntax : M_Void_DIO_TogChannel

  Description :	Function that invert the value of pin (High to Low and vice versa)

  Synch/Asynch     : synchronous
  Reentrance       : Reentrant
  parameters (in)  : Dio_ChannelType
  parameters (out) : N/A
  Return Value     : void
******************************************/
void M_Void_DIO_TogChannel(Dio_ChannelType ChannelID);



#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
