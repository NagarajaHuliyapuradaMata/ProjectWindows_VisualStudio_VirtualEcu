/******************************************************************************/
/* File   : CalloutStubsSwcServiceEcuM.cpp                                    */
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

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "CfgSwcServiceEcuM.hpp"
#include "CalloutStubsSwcServiceEcuM.hpp"

#include "infEcuabCanIfSwcServiceEcuM.hpp"
#include "infSwcServiceCanTpSwcServiceEcuM.hpp"
#include "infEcuabFeeSwcServiceEcuM.hpp"
#include "infMcalAdcSwcServiceEcuM.hpp"
#include "infMcalCanSwcServiceEcuM.hpp"
#include "infMcalDioSwcServiceEcuM.hpp"
#include "infMcalFlsSwcServiceEcuM.hpp"
#include "infMcalGptSwcServiceEcuM.hpp"
#include "infMcalWdgSwcServiceEcuM.hpp"
#include "infSwcServiceCanSmSwcServiceEcuM.hpp"
#include "infSwcServiceComSwcServiceEcuM.hpp"
#include "infSwcServiceComMSwcServiceEcuM.hpp"
#include "infSwcServiceDcmSwcServiceEcuM.hpp"
#include "infSwcServiceDemSwcServiceEcuM.hpp"
#include "infSwcServiceDetSwcServiceEcuM.hpp"
#include "infSwcServiceNvMSwcServiceEcuM.hpp"
#include "infSwcServicePduRSwcServiceEcuM.hpp"
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
#if(CfgSwcServiceEcuM_EnableInterrupts == STD_ON)
FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SetProgrammableInterrupts(void){
   CalloutStubsSwcServiceOs_InitializeVectorTable();
}
#endif

FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_DriverInitZero(void){
   infMcalGptSwcServiceEcuM_InitFunction();
   infMcalDioSwcServiceEcuM_InitFunction();
   infMcalFlsSwcServiceEcuM_InitFunction();
   infMcalAdcSwcServiceEcuM_InitFunction();
   infMcalCanSwcServiceEcuM_InitFunction();
   infMcalWdgSwcServiceEcuM_InitFunction();

   infEcuabFeeSwcServiceEcuM_InitFunction();

   infSwcServiceNvMSwcServiceEcuM_InitFunction();

   infSwcServiceNvMSwcServiceEcuM_ReadAll();

   infSwcServiceDetSwcServiceEcuM_InitFunction();
   infSwcServiceDemSwcServiceEcuM_PreInit();
}

const CfgSwcServiceEcuM_tst* CalloutStubsSwcServiceEcuM_PbConfigurationDetermine(void){
   return &CfgSwcServiceEcuM;
}

FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_CheckPbConfiguration(void){}

FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_DriverInitOne(
   const CfgSwcServiceEcuM_tst* Cfg_lptr
){
   infEcuabCanIfSwcServiceEcuM_InitFunction      (Cfg_lptr->CfgEcuabCanIf_ptr);
   infSwcServiceCanTpSwcServiceEcuM_InitFunction (Cfg_lptr->CfgSwcServiceCanTp_ptr);
   infSwcServiceComMSwcServiceEcuM_InitFunction  (Cfg_lptr->CfgSwcServiceComM_ptr);
   infSwcServiceCanSmSwcServiceEcuM_InitFunction (Cfg_lptr->CfgSwcServiceCanSm_ptr);
   infSwcServicePduRSwcServiceEcuM_InitFunction  (Cfg_lptr->CfgSwcServicePduR_ptr);
   infSwcServiceComSwcServiceEcuM_InitFunction   (Cfg_lptr->CfgSwcServiceCom_ptr);
   infSwcServiceDcmSwcServiceEcuM_InitFunction   (Cfg_lptr->CfgSwcServiceDcm_ptr);
   infSwcServiceDemSwcServiceEcuM_InitFunction();
}

FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SetDefinedMcuWakeupSource(void){}
FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SwitchOsAppMode(void){}

FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_Shutdown(void){
   infSwcServiceDemSwcServiceEcuM_DeInitFunction();
   infSwcServiceDcmSwcServiceEcuM_DeInitFunction();
   infSwcServiceComSwcServiceEcuM_DeInitFunction();
   infSwcServicePduRSwcServiceEcuM_DeInitFunction();
   infSwcServiceCanSmSwcServiceEcuM_DeInitFunction();
   infSwcServiceComMSwcServiceEcuM_DeInitFunction();
   infSwcServiceCanTpSwcServiceEcuM_DeInitFunction();
   infEcuabCanIfSwcServiceEcuM_DeInitFunction();
   infSwcServiceDetSwcServiceEcuM_DeInitFunction();

   infSwcServiceNvMSwcServiceEcuM_WriteAll();

   infSwcServiceNvMSwcServiceEcuM_DeInitFunction();
   infEcuabFeeSwcServiceEcuM_DeInitFunction();
   infMcalWdgSwcServiceEcuM_DeInitFunction();
   infMcalCanSwcServiceEcuM_DeInitFunction();
   infMcalAdcSwcServiceEcuM_DeInitFunction();
   infMcalFlsSwcServiceEcuM_DeInitFunction();
   infMcalDioSwcServiceEcuM_DeInitFunction();
   infMcalGptSwcServiceEcuM_DeInitFunction();
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
