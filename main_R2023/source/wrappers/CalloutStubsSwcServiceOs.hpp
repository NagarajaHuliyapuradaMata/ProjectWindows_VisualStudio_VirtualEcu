#pragma once
/******************************************************************************/
/* File   : CalloutStubsSwcServiceOs.hpp                                      */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SwcServiceOs.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ISR(x)                                           void Os_Entry_##x(void)
#define TASK(x)                                          void Os_Entry_##x(void)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern ISR(CAT2ISR_1ms);
extern ISR(CAT2ISR_Can0Rx);
extern ISR(CAT2ISR_Can0Tx);
extern ISR(CAT2ISR_Wakeup);
extern ISR(CAT2ISR_Can0Status);
extern ISR(CAT2ISR_CanGlobalStatus);
extern ISR(CAT2ISR_Timer0);
extern ISR(CAT2ISR_Timer1);
extern ISR(CAT2ISR_Timer2);
extern ISR(CAT2ISR_Timer3);
extern ISR(CAT2ISR_VoltageMonitor);
extern ISR(CAT2ISR_FlsEnd);
extern ISR(CAT2ISR_Undefined);
extern TASK(TASK_Init);
extern TASK(TASK_CanRx);
extern TASK(TASK_10ms);
extern TASK(TASK_50ms);
extern TASK(TASK_200ms);
extern TASK(TASK_1s);
extern TASK(TASK_Idle);

extern FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookStartup          (void);
extern FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookShutdown         (void);
extern FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookError            (void);
extern FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookStackOverrun     (void);
extern FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_InitializeVectorTable(void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
