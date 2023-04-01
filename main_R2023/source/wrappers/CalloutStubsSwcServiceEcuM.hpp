#pragma once
/******************************************************************************/
/* File   : CalloutStubsSwcServiceEcuM.hpp                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgSwcServiceEcuM.hpp"

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




/******************************************************************************/
//TBD: START
/******************************************************************************/
extern void Os_InitializeVectorTable  (void);
/******************************************************************************/
//TBD: END
/******************************************************************************/




#if(CfgSwcServiceEcuM_EnableInterrupts == STD_ON)
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SetProgrammableInterrupts(void);
#endif
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_DriverInitZero(void);
extern const CfgSwcServiceEcuM_Type*   CalloutStubsSwcServiceEcuM_PbConfigurationDetermine(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_CheckPbConfiguration(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_DriverInitOne(const CfgSwcServiceEcuM_Type* CfgSwcServiceEcuM_lptr);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SetDefinedMcuWakeupSource(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SwitchOsAppMode(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_StartOs(void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
