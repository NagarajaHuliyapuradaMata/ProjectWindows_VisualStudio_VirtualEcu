#ifndef _PBCFGSWCSERVICEDCM_H
#define _PBCFGSWCSERVICEDCM_H
/******************************************************************************/
/* File   : PBcfgSwcServiceDcm.h                                              */
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
#include "CompilerCfg_SwcServiceDcm.h"
#include "Types_SwcServiceDcm.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   const uint8*                               ptr_rxtable_pca;
   const PduIdType*                           ptr_txtable_pca;
   const Type_SwcServiceDcmDsld_stConnection* ptr_conntable_pcs;
   const Type_SwcServiceDcmDsld_stProtocol*   protocol_table_pcs;
   const Type_SwcServiceDcmDsld_stTableSid*   sid_table_pcs;
   const uint8*                               session_lookup_table_pcau8;
   const uint8*                               security_lookup_table_pcau8;
}Type_CfgSwcServiceDcmDsld_st;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const Type_CfgSwcServiceDcmDsld_st CfgSwcServiceDcmDsld_cst;

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
