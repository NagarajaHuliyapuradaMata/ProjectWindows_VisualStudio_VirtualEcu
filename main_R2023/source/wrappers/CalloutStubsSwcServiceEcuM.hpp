#pragma once
/******************************************************************************/
/* File   : CalloutStubsSwcServiceEcuM.hpp                                    */
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

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

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
extern const CfgSwcServiceEcuM_tst*   CalloutStubsSwcServiceEcuM_PbConfigurationDetermine(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_CheckPbConfiguration(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_DriverInitOne(const CfgSwcServiceEcuM_tst* CfgSwcServiceEcuM_lptr);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SetDefinedMcuWakeupSource(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_SwitchOsAppMode(void);
extern FUNC(void, SWCSERVICEECUM_CODE) CalloutStubsSwcServiceEcuM_Shutdown(void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
