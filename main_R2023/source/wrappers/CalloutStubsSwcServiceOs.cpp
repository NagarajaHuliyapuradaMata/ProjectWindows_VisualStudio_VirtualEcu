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
uint32 gu32SystemTime = 0;

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

TASK(TASK_1ms){
}

TASK(TASK_5ms){
}

#include "infMcalCanSwcServiceSchM.hpp"
extern void infSwcServiceOs_RequestShutdown(void); //TBD: Need interface?
TASK(TASK_10ms){
   infMcalCanSwcServiceSchM_MainFunction();
   infSwcServiceOs_RequestShutdown();

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

TASK(TASK_20ms){
}

TASK(TASK_25ms){
}

TASK(TASK_50ms){
}

TASK(TASK_200ms){
}

TASK(TASK_1s){
}

TASK(TASK_Idle){
#if(STD_ON == _ReSIM)
   ReSimCmd_MainFunction();
#else
#endif

   const  uint32 lu32PrescaleSystem = 100000000;
   const  uint8  lu8Prescale5ms     = 5; //TBD: hardcode after SIL testing
   const  uint8  lu8Prescale10ms    = 2;
   const  uint8  lu8Prescale20ms    = 2;
   const  uint8  lu8Prescale25ms    = 5;
   static uint32 lu32TickSystem     = 0;
   static uint8  lu8Tick5ms         = 0;
   static uint8  lu8Tick10ms        = 0;
   static uint8  lu8Tick20ms        = 0;
   static uint8  lu8Tick25ms        = 0;
   if(lu32PrescaleSystem == ++lu32TickSystem){
      lu32TickSystem = 0;
      gu32SystemTime++;
      if(lu8Prescale5ms == ++lu8Tick5ms){
         lu8Tick5ms = 0;
         if(lu8Prescale25ms == ++lu8Tick25ms){
            lu8Tick25ms = 0;
            Os_Entry_TASK_25ms();
         }
         if(lu8Prescale10ms == ++lu8Tick10ms){
            lu8Tick10ms = 0;
            if(lu8Prescale20ms == ++lu8Tick20ms){
               lu8Tick20ms = 0;
               Os_Entry_TASK_20ms();
            }
            Os_Entry_TASK_10ms();
         }
         Os_Entry_TASK_5ms();
      }
      Os_Entry_TASK_1ms();
   }
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookStartup(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookShutdown(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookError(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_HookStackOverrun(void){
}

FUNC(void, SWCSERVICEOS_CODE) CalloutStubsSwcServiceOs_InitializeVectorTable(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
