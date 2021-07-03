/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  cpu_driver.h
 *       Module:  Cpu
 *
 *  Description:  header file for Cpu Module     
 *  
 *********************************************************************************************************************/
#ifndef CPU_H
#define CPU_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define CPU_SWITCH_TO_PRIVMODE()        __asm("SVC #1")
															
#define CPU_SWITCH_TO_USERMODE()        do{__asm("MOV R0, 0x1\n");\
                                           __asm("MSR CONTROL, R0\n")}while(0);
													
#define CPU_DISABLE_ALL_INTERRUPTS()    __asm("CPSID i")																				
#define CPU_ENABLE_ALL_INTERRUPTS()     __asm("CPSIE i")					
														 
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Cpu_StartCriticalSection(void);
void Cpu_StopCriticalSection(void);
void Isr_SvcHandler(void);
 
#endif  /* CPU_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
