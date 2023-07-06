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
#define CfgSwcServiceDcm_dbEnable                                             1u
#define CfgSwcServiceDcm_dbDisable                                            0u
#define CfgSwcServiceDcm_fAdaptiveDiagnostics         CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fSharingPduRx                CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fProcessingParallel          CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fQueueBuffer                 CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fRoe                         CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fRdpi                        CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fPagedBuffer                 CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fKwp                         CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcm_fPBcfg                       CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcmDsld_fModeRuleService         CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcmDsld_fModeRuleSubService      CfgSwcServiceDcm_dbDisable
#define CfgSwcServiceDcmDsld_fCallApplRxRequest       CfgSwcServiceDcm_dbEnable

#define CfgSwcServiceDcmDsld_dNumChannelComM                                   1
#define CfgSwcServiceDcmDsld_dNumIdPduRx                                      2u
#define CfgSwcServiceDcmDsld_dNumIdPduTx                                      1u
#define CfgSwcServiceDcmDsld_dIdServiceObd_0x01                          (0x01u)
#define CfgSwcServiceDcmDsld_dIdServiceObd_0x0A                          (0x0Au)

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
