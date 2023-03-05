/******************************************************************************/
/* File   : CalloutStubsServiceSwcEcuM.cpp                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "CalloutStubsServiceSwcEcuM.hpp"

#include "infServiceCanSm_ServiceSwcEcuM.hpp"
#include "infServiceCom_ServiceSwcEcuM.hpp"
#include "infServiceComM_ServiceSwcEcuM.hpp"
#include "infServiceDcm_ServiceSwcEcuM.hpp"
#include "infServiceDem_ServiceSwcEcuM.hpp"
#include "infServiceDet_ServiceSwcEcuM.hpp"
#include "infServiceNvM_ServiceSwcEcuM.hpp"
#include "infServicePduR_ServiceSwcEcuM.hpp"
#include "infEcuabCanIf_ServiceSwcEcuM.hpp"
#include "infEcuabCanTp_ServiceSwcEcuM.hpp"
#include "infEcuabFee_ServiceSwcEcuM.hpp"
#include "infMcalAdc_ServiceSwcEcuM.hpp"
#include "infMcalCan_ServiceSwcEcuM.hpp"
#include "infMcalDio_ServiceSwcEcuM.hpp"
#include "infMcalFls_ServiceSwcEcuM.hpp"
#include "infMcalGpt_ServiceSwcEcuM.hpp"
#include "infMcalWdg_ServiceSwcEcuM.hpp"

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
#if(CfgServiceSwcEcuM_EnableInterrupts == STD_ON)
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SetProgrammableInterrupts(void){
   Os_InitializeVectorTable();
}
#endif

FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_DriverInitZero(void){
   McalGpt_InitFunction();
   McalDio_InitFunction();
   McalFls_InitFunction();
   McalAdc_InitFunction();
   McalCan_InitFunction();
   McalWdg_InitFunction();

   EcuabFee_InitFunction();

   ServiceNvM_InitFunction();

   ServiceNvM_ReadAll();

   ServiceDet_InitFunction();
   ServiceDem_PreInit();
}

const CfgServiceSwcEcuM_Type*   CalloutStubsServiceSwcEcuM_PbConfigurationDetermine(void){return (const CfgServiceSwcEcuM_Type*) NULL_PTR;}
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_CheckPbConfiguration(void){}

FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_DriverInitOne(
   const CfgServiceSwcEcuM_Type* Cfg_lptr
){
   EcuabCanIf_InitFunction   (Cfg_lptr->CfgEcuabCanIf_ptr);
   EcuabCanTp_InitFunction   (Cfg_lptr->CfgEcuabCanTp_ptr);
   ServiceComM_InitFunction  (Cfg_lptr->CfgServiceComM_ptr);
   ServiceCanSm_InitFunction (Cfg_lptr->CfgServiceCanSm_ptr);
   ServicePduR_InitFunction  (Cfg_lptr->CfgServicePduR_ptr);
   ServiceCom_InitFunction   (Cfg_lptr->CfgServiceCom_ptr);
   ServiceDcm_InitFunction();
   ServiceDem_InitFunction();
}

FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SetDefinedMcuWakeupSource(void){}
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SwitchOsAppMode(void){}
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_StartOs(void){}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
