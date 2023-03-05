#pragma once
/******************************************************************************/
/* File   : CalloutStubsServiceSwcEcuM.hpp                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgServiceSwcEcuM.hpp"

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




#if(CfgServiceSwcEcuM_EnableInterrupts == STD_ON)
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SetProgrammableInterrupts(void);
#endif
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_DriverInitZero(void);
extern const CfgServiceSwcEcuM_Type*   CalloutStubsServiceSwcEcuM_PbConfigurationDetermine(void);
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_CheckPbConfiguration(void);
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_DriverInitOne(const CfgServiceSwcEcuM_Type* CfgServiceSwcEcuM_lptr);
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SetDefinedMcuWakeupSource(void);
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_SwitchOsAppMode(void);
extern FUNC(void, SERVICESWCECUM_CODE) CalloutStubsServiceSwcEcuM_StartOs(void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
