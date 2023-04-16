/******************************************************************************/
/* File   : CalloutStubsSwcServiceOs.cpp                                      */
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
#include "Std_Types.hpp"

#include "CalloutStubsSwcServiceOs.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

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
ISR(CAT2ISR_1ms){
}

ISR(CAT2ISR_Can0Rx){
}

ISR(CAT2ISR_Can0Tx){
}

ISR(CAT2ISR_Wakeup){
}

ISR(CAT2ISR_Can0Status){
}

ISR(CAT2ISR_CanGlobalStatus){
}

ISR(CAT2ISR_Timer0){
}

ISR(CAT2ISR_Timer1){
}

ISR(CAT2ISR_Timer2){
}

ISR(CAT2ISR_Timer3){
}

ISR(CAT2ISR_VoltageMonitor){
}

ISR(CAT2ISR_FlsEnd){
}

ISR(CAT2ISR_Undefined){
/*
   __DI();
   while(1){
      LED_Blink();
      Wdt_Trigger();
   }
*/
}

TASK(TASK_Init){
/*
   ApplSwcProjectX_InitFunction();
   SwcServiceOs_TerminateTask();
*/
}

TASK(TASK_CanRx){
}

#include "infMcalCanSwcServiceSchM.hpp"
TASK(TASK_10ms){
   infMcalCanSwcServiceSchM_MainFunction();

#if(0)
   //TBD: Check sequence for logical correctness
   infServiceComSwcServiceSchM_MainFunctionTx();
   infServiceCanSmSwcServiceSchM_MainFunction();
   infServiceComMSwcServiceSchM_MainFunction();
   infServiceComSwcServiceSchM_MainFunctionRx();
   infSwcServiceCanTpSwcServiceSchM_MainFunction(); //TBD: Special case - only Dcm is CanTp's client ==> PduR is bypassed!
   infServiceDcmSwcServiceSchM_MainFunction();
   infServiceDemSwcServiceSchM_MainFunction();
   infSwcServiceEcuMSwcServiceSchM_MainFunction();

   infServiceNvMSwcServiceSchM_MainFunction(); //TBD: Assumption - only top-down approach is sufficient in run-time execution
   infEcuabFeeSwcServiceSchM_MainFunction();
   infMcalFlsSwcServiceSchM_MainFunction();

   infMcalWdgSwcServiceSchM_MainFunction();

   SwcServiceOs_TerminateTask();
#endif
}

TASK(TASK_50ms){
}

TASK(TASK_200ms){
}

TASK(TASK_1s){
}

TASK(TASK_Idle){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookStartup(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookShutdown(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookError(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookStackOverrun(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_InitializeVectorTable(void){}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
