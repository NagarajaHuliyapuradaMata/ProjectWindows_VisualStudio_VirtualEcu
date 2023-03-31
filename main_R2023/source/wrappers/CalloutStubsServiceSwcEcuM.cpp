/******************************************************************************/
/* File   : CalloutStubsServiceSwcEcuM.cpp                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "CalloutStubsServiceSwcEcuM.hpp"

#include "infEcuabCanIfServiceSwcEcuM.hpp"
#include "infServiceSwcCanTpServiceSwcEcuM.hpp"
#include "infEcuabFeeServiceSwcEcuM.hpp"
#include "infMcalAdcServiceSwcEcuM.hpp"
#include "infMcalCanServiceSwcEcuM.hpp"
#include "infMcalDioServiceSwcEcuM.hpp"
#include "infMcalFlsServiceSwcEcuM.hpp"
#include "infMcalGptServiceSwcEcuM.hpp"
#include "infMcalWdgServiceSwcEcuM.hpp"
#include "infServiceSwcCanSmServiceSwcEcuM.hpp"
#include "infServiceSwcComServiceSwcEcuM.hpp"
#include "infServiceSwcComMServiceSwcEcuM.hpp"
#include "infServiceSwcDcmServiceSwcEcuM.hpp"
#include "infServiceSwcDemServiceSwcEcuM.hpp"
#include "infServiceSwcDetServiceSwcEcuM.hpp"
#include "infServiceSwcNvMServiceSwcEcuM.hpp"
#include "infServiceSwcPduRServiceSwcEcuM.hpp"
#include "CalloutStubsServiceSwcOs.hpp" //TBD: Move to ServiceSwcOs

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
   CalloutStubsServiceSwcOs_InitializeVectorTable();
}
#endif

FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_DriverInitZero(void){
   infMcalGptServiceSwcEcuM_InitFunction();
   infMcalDioServiceSwcEcuM_InitFunction();
   infMcalFlsServiceSwcEcuM_InitFunction();
   infMcalAdcServiceSwcEcuM_InitFunction();
   infMcalCanServiceSwcEcuM_InitFunction();
   infMcalWdgServiceSwcEcuM_InitFunction();

   infEcuabFeeServiceSwcEcuM_InitFunction();

   infServiceSwcNvMServiceSwcEcuM_InitFunction();

   infServiceSwcNvMServiceSwcEcuM_ReadAll();

   infServiceSwcDetServiceSwcEcuM_InitFunction();
   infServiceSwcDemServiceSwcEcuM_PreInit();
}

const CfgServiceSwcEcuM_Type*   CalloutStubsServiceSwcEcuM_PbConfigurationDetermine(void){return (const CfgServiceSwcEcuM_Type*) NULL_PTR;}
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_CheckPbConfiguration(void){}

FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_DriverInitOne(
   const CfgServiceSwcEcuM_Type* Cfg_lptr
){
   infEcuabCanIfServiceSwcEcuM_InitFunction      (Cfg_lptr->CfgEcuabCanIf_ptr);
   infServiceSwcCanTpServiceSwcEcuM_InitFunction (Cfg_lptr->CfgServiceSwcCanTp_ptr);
   infServiceSwcComMServiceSwcEcuM_InitFunction  (Cfg_lptr->CfgServiceSwcComM_ptr);
   infServiceSwcCanSmServiceSwcEcuM_InitFunction (Cfg_lptr->CfgServiceSwcCanSm_ptr);
   infServiceSwcPduRServiceSwcEcuM_InitFunction  (Cfg_lptr->CfgServiceSwcPduR_ptr);
   infServiceSwcComServiceSwcEcuM_InitFunction   (Cfg_lptr->CfgServiceSwcCom_ptr);
   infServiceSwcDcmServiceSwcEcuM_InitFunction   (Cfg_lptr->CfgServiceSwcDcm_ptr);
   infServiceSwcDemServiceSwcEcuM_InitFunction();
}

FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SetDefinedMcuWakeupSource(void){}
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SwitchOsAppMode(void){}
FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_StartOs(void){}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
