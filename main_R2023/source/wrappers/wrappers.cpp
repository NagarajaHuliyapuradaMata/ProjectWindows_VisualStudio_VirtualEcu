#include "Std_Types.hpp"

#include "CompilerCfg_SwcServiceOs.hpp"

/******************************************************************************/
//TBD: START - Os.hpp
/******************************************************************************/
#define ISR(x)  void Os_Entry_##x(void)
#define TASK(x) void Os_Entry_##x(void)

ISR(CAT2ISR_1ms);
ISR(CAT2ISR_Can0Rx);
ISR(CAT2ISR_Can0Tx);
ISR(CAT2ISR_Wakeup);
ISR(CAT2ISR_Can0Status);
ISR(CAT2ISR_CanGlobalStatus);
ISR(CAT2ISR_Timer0);
ISR(CAT2ISR_Timer1);
ISR(CAT2ISR_Timer2);
ISR(CAT2ISR_Timer3);
ISR(CAT2ISR_VoltageMonitor);
ISR(CAT2ISR_FlsEnd);
ISR(CAT2ISR_Undefined);
TASK(TASK_Init);
TASK(TASK_CanRx);
TASK(TASK_10ms);
TASK(TASK_50ms);
TASK(TASK_200ms);
TASK(TASK_1s);
FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookStartup      (void);
FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookShutdown     (void);
FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookError        (void);
FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookStackOverrun (void);

/******************************************************************************/
//TBD: END
/******************************************************************************/


/******************************************************************************/
//TBD: START - Isr.cpp
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

FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookStartup(void){
}

FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookShutdown(void){
}

FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookError(void){
}

FUNC(void, SWCSERVICEOS_CODE) CallbackSwcServiceOs_HookStackOverrun(void){
}

/******************************************************************************/
//TBD: END - Isr.cpp
/******************************************************************************/
