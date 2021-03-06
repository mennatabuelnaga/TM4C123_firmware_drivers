/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"
#include "port_cfg.h"
#include "port.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
const Port_ConfigType Port_Config[PORT_ACTIVATED_CHANNELS_SIZE] =
{
	/* pinId         pinDir          pinMode                currentStrength        internalAttach          externalInterrupt*/
	{Port_Pin_A2, PORT_PIN_IN,  Port_PinMode_PA2_SSI0Clk, PORT_PIN_CURRENT_NA,   PORT_ATTACH_PULLUP,   PORT_EXT_INT_DISABLE},
	{Port_Pin_B5, PORT_PIN_IN,  Port_PinMode_X_DIO,       PORT_PIN_CURRENT_NA,   PORT_ATTACH_PULLDOWN, PORT_EXT_INT_DISABLE},
	{Port_Pin_B7, PORT_PIN_OUT, Port_PinMode_X_DIO,       PORT_PIN_CURRENT_8m,   PORT_ATTACH_PULLUP,   PORT_EXT_INT_DISABLE}
	
};
/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
