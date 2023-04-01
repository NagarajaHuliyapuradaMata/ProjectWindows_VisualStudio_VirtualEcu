/******************************************************************************/
/* File   : CalloutStubsSwcServiceEcuM.cpp                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

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
#include "CalloutStubsSwcServiceOs.hpp" //TBD: Move to SwcServiceOs

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

const CfgSwcServiceEcuM_Type*   CalloutStubsSwcServiceEcuM_PbConfigurationDetermine(void){return (const CfgSwcServiceEcuM_Type*) NULL_PTR;}
FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_CheckPbConfiguration(void){}

FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_DriverInitOne(
   const CfgSwcServiceEcuM_Type* Cfg_lptr
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
FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_StartOs(void){}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
