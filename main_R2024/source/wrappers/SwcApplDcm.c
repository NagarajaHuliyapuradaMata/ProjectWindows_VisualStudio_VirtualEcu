/******************************************************************************/
/* File   : SwcApplDcm.c                                                      */
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
/* All rights reserved. Copyright � 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* git@github.com:RaajnaagHuliyapuradaMata/<module_name>.git                  */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "infSwcApplDcmMcalMcu.h"
#include "infSwcApplDcmSwcServiceDcm.h"

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
static boolean bSendPositiveResponse = FALSE;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SWCSERVICEDCM_CODE) infSwcApplDcmMcalMcu_vTriggerPositiveResponse(void){
   bSendPositiveResponse = TRUE;
}

FUNC(boolean, SWCSERVICEDCM_CODE) SwcApplDcm_GetPositiveResponseTrigger(void){
   return bSendPositiveResponse;
}

#if(CfgSwcServiceDcmDsld_fCallApplRxRequest != CfgSwcServiceDcm_dbDisable)
FUNC(void, SWCSERVICEDCM_CODE) infSwcApplDcmSwcServiceDcm_vCopyPduRx(
      Type_tIdPdu     ltIdPdu
   ,  Type_tLengthPdu ltLengthPdu
){
   (void)ltIdPdu;
   (void)ltLengthPdu;
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
