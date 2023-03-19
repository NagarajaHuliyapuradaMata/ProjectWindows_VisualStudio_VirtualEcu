#include "Std_Types.hpp"

#include "CompilerCfg_ServiceSwcOs.hpp"

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
FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookStartup      (void);
FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookShutdown     (void);
FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookError        (void);
FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookStackOverrun (void);

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
   ServiceSwcOs_TerminateTask();
*/
}

TASK(TASK_CanRx){
}

#include "infMcalCanServiceSwcSchM.hpp"
TASK(TASK_10ms){
   infMcalCanServiceSwcSchM_MainFunction();

#if(0)
   //TBD: Check sequence for logical correctness
   infServiceComServiceSwcSchM_MainFunctionTx();
   infServiceCanSmServiceSwcSchM_MainFunction();
   infServiceComMServiceSwcSchM_MainFunction();
   infServiceComServiceSwcSchM_MainFunctionRx();
   infServiceSwcCanTpServiceSwcSchM_MainFunction(); //TBD: Special case - only Dcm is CanTp's client ==> PduR is bypassed!
   infServiceDcmServiceSwcSchM_MainFunction();
   infServiceDemServiceSwcSchM_MainFunction();
   infServiceSwcEcuMServiceSwcSchM_MainFunction();

   infServiceNvMServiceSwcSchM_MainFunction(); //TBD: Assumption - only top-down approach is sufficient in run-time execution
   infEcuabFeeServiceSwcSchM_MainFunction();
   infMcalFlsServiceSwcSchM_MainFunction();

   infMcalWdgServiceSwcSchM_MainFunction();

   ServiceSwcOs_TerminateTask();
#endif
}

TASK(TASK_50ms){
}

TASK(TASK_200ms){
}

TASK(TASK_1s){
}

FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookStartup(void){
}

FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookShutdown(void){
}

FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookError(void){
}

FUNC(void, SERVICESWCOS_CODE) CallbackServiceSwcOs_HookStackOverrun(void){
}

/******************************************************************************/
//TBD: END - Isr.cpp
/******************************************************************************/
