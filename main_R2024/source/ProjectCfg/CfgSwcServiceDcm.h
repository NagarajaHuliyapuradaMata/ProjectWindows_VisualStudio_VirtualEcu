#ifndef _CFGSWCSERVICEDCM_H
#define _CFGSWCSERVICEDCM_H
/******************************************************************************/
/* File   : CfgSwcServiceDcm.h                                                */
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
#define CfgSwcServiceDcm_Enable                                               1u
#define CfgSwcServiceDcm_Disable                                              0u
#define CfgSwcServiceDcm_AdaptiveDiagnostics            CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_PduRxSharing                   CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_EnableProcessingParallel       CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_QueueBuffer                    CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_Roe                            CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_Rdpi                           CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_BufferPaged                    CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_Kwp                            CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcm_PBcfg                          CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcmDsld_ModeRuleService            CfgSwcServiceDcm_Disable
#define CfgSwcServiceDcmDsld_ModeRuleSubService         CfgSwcServiceDcm_Disable

#define CfgSwcServiceDcmDsld_NumChannelComM                                    1
#define CfgSwcServiceDcmDsld_NumIdPduRx                                       2u
#define CfgSwcServiceDcmDsld_IdServiceObd_0x01                           (0x01u)
#define CfgSwcServiceDcmDsld_IdServiceObd_0x0A                           (0x0Au)

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
/* EOF                                                                        */
/******************************************************************************/
#endif
