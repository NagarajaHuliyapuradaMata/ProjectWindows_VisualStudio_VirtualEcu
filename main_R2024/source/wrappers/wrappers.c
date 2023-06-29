/******************************************************************************/
/* File   : wrapper.c                                                         */
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
#include "Std_Types.h"

#include "infMcalAdcSwcServiceEcuM.h"
//#include "infMcalCanSwcServiceEcuM.h"
#include "infMcalWdgSwcServiceEcuM.h"
#include "infSwcServiceDcmSwcServiceEcuM.h"
#include "infSwcServiceDcmSwcServiceSchM.h"

int main(void){
   infMcalAdcSwcServiceEcuM_vInitFunction();
// infMcalCanSwcServiceEcuM_vInitFunction();
   infMcalWdgSwcServiceEcuM_vInitFunction();
   infSwcServiceDcmSwcServiceEcuM_vInitFunction(0);

   while(1){
      infSwcServiceDcmSwcServiceSchM_vMainFunction();
      infSwcApplDcmSwcServiceSchM_vMainFunction();
      infSwcApplDcmSwcServiceSchM_vRunnableIncNonceCounter();
   }
   return 0;
}
