/******************************************************************************/
/* File   : CanIf_PBcfg.c                                                     */
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
/* All rights reserved. Copyright � 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://RaajnaagHuliyapuradaMata@bitbucket.org/raajnaag-huliyapurada-mata/<module_name>.git */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CanIf_Prv.h"

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
#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_Cfg_CtrlConfig_tst, CANIF_CONST) CfgEcuabCanIf_lcatsTableControllers[] = {
   {0, CfgMcalCan_CanNetwork0_CanNode0_CanController0, FALSE}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_Cfg_HthConfig_tst, CANIF_CONST) CfgEcuabCanIf_lcatsTableHardwareHandlesTx[] = {
      {&CfgEcuabCanIf_lcatsTableControllers[CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0], CfgMcalCan_CanNetwork0_CanNode0_TxStdMailBox_CanHardwareObject1, CANIF_FULL}
   ,  {&CfgEcuabCanIf_lcatsTableControllers[CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0], CfgMcalCan_CanNetwork0_CanNode0_TxStdMailBox_CanHardwareObject2, CANIF_FULL}
   ,  {&CfgEcuabCanIf_lcatsTableControllers[CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0], CfgMcalCan_CanNetwork0_CanNode0_TxStdMailBox_CanHardwareObject3, CANIF_FULL}
   ,  {&CfgEcuabCanIf_lcatsTableControllers[CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0], CfgMcalCan_CanNetwork0_CanNode0_TxStdMailBox_CanHardwareObject4, CANIF_FULL}
   ,  {&CfgEcuabCanIf_lcatsTableControllers[CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0], CfgMcalCan_CanNetwork0_CanNode0_TxStdMailBox_CanHardwareObject5, CANIF_FULL}
   ,  {&CfgEcuabCanIf_lcatsTableControllers[CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0], CfgMcalCan_CanNetwork0_CanNode0_TxStdMailBox_CanHardwareObject6, CANIF_FULL}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_Cfg_TxBufferConfig_tst, CANIF_CONST) CfgEcuabCanIf_lcatsTableBuffersTx[] = {
      {&CfgEcuabCanIf_lcatsTableHardwareHandlesTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth1]}
   ,  {&CfgEcuabCanIf_lcatsTableHardwareHandlesTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth2]}
   ,  {&CfgEcuabCanIf_lcatsTableHardwareHandlesTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth3]}
   ,  {&CfgEcuabCanIf_lcatsTableHardwareHandlesTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth4]}
   ,  {&CfgEcuabCanIf_lcatsTableHardwareHandlesTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth5]}
   ,  {&CfgEcuabCanIf_lcatsTableHardwareHandlesTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth6]}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_Cfg_TxPduConfig_tst, CANIF_CONST) CfgEcuabCanIf_lcatsTablePdusTx[] = {
      {&CfgEcuabCanIf_lcatsTableBuffersTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer1], CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_ApplicationCyclic,            0,                                      CANIF_STATIC, STANDARD_CAN, PDUR,   &PduR_CanIfTxConfirmation, 0x6DA, FALSE, FALSE, 8u}
   ,  {&CfgEcuabCanIf_lcatsTableBuffersTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer3], CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_ApplicationResponse,          1,                                      CANIF_STATIC, STANDARD_CAN, PDUR,   &PduR_CanIfTxConfirmation, 0x67A, FALSE, FALSE, 8u}
   ,  {&CfgEcuabCanIf_lcatsTableBuffersTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer5], CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_HmiPressure,                  2,                                      CANIF_STATIC, STANDARD_CAN, PDUR,   &PduR_CanIfTxConfirmation, 0x530, FALSE, FALSE, 8u}
   ,  {&CfgEcuabCanIf_lcatsTableBuffersTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer2], CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_HmiTemperatureAndRefPressure, 3,                                      CANIF_STATIC, STANDARD_CAN, PDUR,   &PduR_CanIfTxConfirmation, 0x541, FALSE, FALSE, 8u}
   ,  {&CfgEcuabCanIf_lcatsTableBuffersTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer4], CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_UdsResponse_Physical,         CanTpConf_CanTpTxNPdu_Phys_CanTp2CanIf, CANIF_STATIC, STANDARD_CAN, CAN_TP, &CanTp_TxConfirmation,     0x77A, FALSE, FALSE, 8u}
   ,  {&CfgEcuabCanIf_lcatsTableBuffersTx[CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer6], CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_BroadcastEcuSoftwareID  ,     5,                                      CANIF_STATIC, STANDARD_CAN, PDUR,   &PduR_CanIfTxConfirmation, 0x53A, FALSE, FALSE, 8u}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_Cfg_Hrhtype_tst, CANIF_CONST) CfgEcuabCanIf_lcatsTableHardwareObjectHandlesRx[11] = {
      {CANIF_PRV_FULL_E,  0u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  1u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  2u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  3u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  4u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  5u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  6u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  7u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  8u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E,  9u, 1u, FALSE, 0u}
   ,  {CANIF_PRV_FULL_E, 10u, 1u, FALSE, 0u}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_Cfg_RxPduType_tst, CANIF_CONST) CfgEcuabCanIf_lcatsTablePdusRx[11] = {
      {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 1594u, 0, PduRConf_PduRSrcPdu_ApplicationRequest_ECU_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 520u,  1, PduRConf_PduRSrcPdu_BCM_peripheralMasterClock_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 521u,  2, PduRConf_PduRSrcPdu_ESP_WSpeed_Front_BodyLCAN_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 2u, 0x20u, 1u, 1850u, 3, CanTpConf_CanTpRxNPdu_Phys_CanIf2CanTp}
   ,  {CANIF_READ_NOTIFSTATUS, 2u, 0x20u, 1u, 2015u, 4, CanTpConf_CanTpRxNPdu_Func_CanIf2CanTP}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 522u,  5, PduRConf_PduRSrcPdu_ESP_WSpeed_Rear_BodyLCAN_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 523u,  6, PduRConf_PduRSrcPdu_ESP_Wheel_Pulse_Stamped_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 789u,  7, PduRConf_PduRSrcPdu_TMM_Status_BodyLCAN_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 768u,  8, PduRConf_PduRSrcPdu_RdcData_ECU_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 528u,  9, PduRConf_PduRSrcPdu_VehSts_BodyLCAN_Can_Network_CANNODE_0_CanIf2PduR}
   ,  {CANIF_READ_NOTIFSTATUS, 6u, 0x20u, 8u, 816u, 10, PduRConf_PduRSrcPdu_VmsStsReq_BodyLCAN_Can_Network_CANNODE_0_CanIf2PduR}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

static CONST(uint16, CANIF_CONST) CfgEcuabCanIf_lcau16TableHardwareObjectHandleRxMappingIds[] = {0,1,2,3,4,5,6,7,8,9,10,INVALID_ID,INVALID_ID,INVALID_ID,INVALID_ID,INVALID_ID};
static CONST(uint16, CANIF_CONST) CfgEcuabCanIf_lcau16TablePduRxMappingIds[]                  = {0,1,2,3,4,5,6,7,8,9,10};

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(CanIf_RxCbk_Prototype, CANIF_CONST) CfgEcuabCanIf_lcafpTableRxIndicationUpperLayers[] = {
      {NULL_PTR}
   ,  {NULL_PTR}
   ,  {&CanTp_RxIndication}
   ,  {NULL_PTR}
   ,  {NULL_PTR}
   ,  {NULL_PTR}
   ,  {&PduR_CanIfRxIndication}
   ,  {NULL_PTR}
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
CONST(CanIf_CallbackFuncType, CANIF_CONST) CanIf_Callback = {
      &CanSM_ControllerBusOff
   ,  &CanSM_ControllerModeIndication
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(uint16, CANIF_CONST) CfgEcuabCanIf_lcau16TablePduTxMappingIds[] = {0,1,2,3,4,5};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
static CONST(uint8, CANIF_CONST) CfgEcuabCanIf_lcau8TableControllerMappingIds[] = {0};

#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#include "CanIf_MemMap.h"
CONST(CanIf_ConfigType, CANIF_CONST) CanIf_Config = {
      &CfgEcuabCanIf_lcatsTableHardwareObjectHandlesRx[0]
   ,  &CfgEcuabCanIf_lcatsTablePdusRx[0]
   ,  11u
   ,  1
   ,  0
   ,  &CfgEcuabCanIf_lcau16TablePduRxMappingIds[0]
   ,  &CfgEcuabCanIf_lcau16TableHardwareObjectHandleRxMappingIds[0]
   ,  0
   ,  &CfgEcuabCanIf_lcatsTablePdusTx[0u]
   ,  &CfgEcuabCanIf_lcatsTableBuffersTx[0u]
   ,  &CfgEcuabCanIf_lcatsTableControllers[0u]
   ,  6
   ,  6
   ,  &CfgEcuabCanIf_lcau16TablePduTxMappingIds[0]
   ,  &CfgEcuabCanIf_lcau8TableControllerMappingIds[0]
   ,  &CfgEcuabCanIf_lcafpTableRxIndicationUpperLayers[0]
};
#define CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#include "CanIf_MemMap.h"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
