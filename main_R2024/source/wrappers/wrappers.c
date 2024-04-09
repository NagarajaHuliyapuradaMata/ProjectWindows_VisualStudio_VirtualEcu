/******************************************************************************/
/* File   : wrapper.c                                                         */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/
#include "Std_Types.h"

#include "infMcalAdcSwcServiceEcuM.h"
//#include "infMcalCanSwcServiceEcuM.h"
#include "infMcalWdgSwcServiceEcuM.h"
#include "infSwcServiceDcmSwcServiceEcuM.h"
#include "infSwcServiceDcmSwcServicePduR.h"
#include "infSwcServiceDcmSwcServiceSchM.h"

int main(void){
   infMcalAdcSwcServiceEcuM_vInitFunction();
// infMcalCanSwcServiceEcuM_vInitFunction();
   infMcalWdgSwcServiceEcuM_vInitFunction();
   infSwcServiceDcmSwcServiceEcuM_vInitFunction(0);

   while(1){
      /* SwcServiceDcm / SwcApplDcm */
      (void)infSwcServiceDcmSwcServicePduR_eCopyPduRx(0, 0, 0);
      (void)infSwcServiceDcmSwcServicePduR_eCopyPduTx(0, 0, 0, 0);
      (void)infSwcServiceDcmSwcServicePduR_eStartReception(0, 0, 0, 0);
            infSwcServiceDcmSwcServicePduR_vTpRxIndication(0, 0);
            infSwcServiceDcmSwcServicePduR_vTpTxConfirmation(0, 0);
            infSwcServiceDcmSwcServiceSchM_vMainFunction();
            infSwcApplDcmSwcServiceSchM_vMainFunction();
            infSwcApplDcmSwcServiceSchM_vRunnableIncNonceCounter();
   }
   return 0;
}
