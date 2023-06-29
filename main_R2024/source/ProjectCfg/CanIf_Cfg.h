#ifndef _CANIF_CFG_H
#define _CANIF_CFG_H
/******************************************************************************/
/* File   : CanIf_Cfg.h                                                       */
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
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://RaajnaagHuliyapuradaMata@bitbucket.org/raajnaag-huliyapurada-mata/<module_name>.git */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "EcuM_Cbk.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CANIF_VENDOR_ID                                                       1u
#define CANIF_MODULE_ID                                                      60u
#define CANIF_AR_RELEASE_MAJOR_VERSION                                        4u
#define CANIF_AR_RELEASE_MINOR_VERSION                                        2u
#define CANIF_AR_RELEASE_REVISION_VERSION                                     2u
#define CANIF_SW_MAJOR_VERSION                                                6u
#define CANIF_SW_MINOR_VERSION                                                0u
#define CANIF_SW_PATCH_VERSION                                                0u
#define CANIF_CFG_VAR_PC                                                       1
#define CANIF_CFG_VAR_PBS                                                      2
#define CANIF_CONFIGURATION_VARIANT                             CANIF_CFG_VAR_PC

#define CANIF_METADATA_SUPPORT                                           STD_OFF
#define CANIF_PUBLIC_TXCONFIRM_POLLING_SUPPORT                           STD_OFF
#define CANIF_READRXPDU_NOTIFY_STATUS_API                                STD_ON
#define CANIF_TRIGGERTRANSMIT_SUPPORT                                    STD_OFF
#define CANIF_TXOFFLINEACTIVE_SUPPORT                                    STD_OFF
#define CANIF_SET_BAUDRATE_API                                           STD_OFF
#define CANIF_PUBLIC_CANCEL_TRANSMIT_SUPPORT                             STD_OFF
#define CANIF_PUBLIC_BUSOFF_RECOVERY_FROM_RXINDICATION                   STD_OFF
#define CANIF_DIRECT_HW_WRITE                                            STD_OFF
#define CANIF_PUBLIC_DEV_ERROR_DETECT                                    STD_OFF
#define CANIF_READTXPDU_NOTIFY_STATUS_API                                STD_ON
#define CANIF_READMSGID_API                                              STD_OFF
#define CANIF_USER_TXBUFCLEARNOTIFY_API                                  STD_OFF
#define CANIF_ERROR_PASSIVE_SUPPORT                                      STD_OFF
#define CANIF_CTRL_WAKEUP_SUPPORT                                        STD_OFF
#define CANIF_TRCV_WAKEUP_SUPPORT                                        STD_OFF
#define CANIF_CFG_TRCV_DRV_SUPPORT                                       STD_OFF
#define CANIF_PUBLIC_WAKEUP_CHECK_VALIDATION_API                         STD_OFF
#define CANIF_PUBLIC_VERSIONINFO_API                                     STD_OFF
#define CANIF_PUBLIC_SETDYNAMICTXID_API                                  STD_OFF
#define CANIF_RB_CHANGERXPDUID_API                                       STD_OFF
#define CANIF_PUBLIC_TXBUFFERING                                         STD_OFF
#define CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API                         STD_ON
#define CANIF_PUBLIC_READRXPDU_DATA_API                                  STD_OFF
#define CANIF_PUBLIC_WAKEUP_CHECK_VALIDATION_SUPPORT                     STD_OFF
#define CANIF_WAKEUP_SUPPORT                                             STD_OFF
#define CANIF_CFG_RX_FEATURE_ENABLED                                     STD_ON
#define CANIF_CFG_RX_RANGE_CONFIG                                        STD_OFF
#define CANIF_CFG_READRXPDU_DATA_IN_RXPDUS                               STD_OFF
#define CANIF_CFG_USER_RX_ENABLED                                        STD_OFF
#define CANIF_CFG_UL_RX                                                  STD_ON
#define CANIF_CFG_TRCV_DRV_SUPPORT                                       STD_OFF
#define CANIF_CFG_TRCV_WAKEUP_SUPPORT                                    STD_OFF
#define CANIF_CFG_TRCV_PN_SUPPORT                                        STD_OFF
#define CANIF_CFG_TX_FEATURE_ENABLED                                     STD_ON
#define CANIF_CFG_HRH_LIST_ENABLED                                       STD_OFF
#define CANIF_CANNM_TXID_FILTER                                          STD_OFF
#define CANIF_RB_READMSGID_API                                           STD_OFF
#define CANIF_RB_ERROR_PASSIVE_SUPPORT                                   STD_OFF
#define CANIF_RB_CALIBRATION                                             STD_OFF
#define CANIF_RB_NODE_CALIBRATION                                        STD_OFF
#define CANIF_CFG_DLC_CHECK                                              STD_OFF
#define CANIF_FD_SUPPORT                                                 STD_OFF
#define CANIF_LITE_CONFIGURATION                                         STD_OFF
#define CANIF_USER_TP_TX_OFFLINE_MODE                                    STD_OFF
#define CANIF_PUBLIC_PN_SUPPORT                                          STD_OFF
#define CANIF_CANNM_TXID_FILTER                                          STD_OFF
#define CANIF_CANNM_ENABLED                                              STD_OFF
#define CANIF_CANSM_ENABLED                                              STD_ON
#define CANIF_J1939NM_ENABLED                                            STD_OFF
#define CANIF_CANTP_ENABLED                                              STD_ON
#define CANIF_CANTSYN_ENABLED                                            STD_OFF
#define CANIF_PDUR_ENABLED                                               STD_ON
#define CANIF_CDD_RX_ENABLED                                             STD_OFF
#define CANIF_USER_RX_ENABLED                                            STD_OFF
#define CANIF_CDD_TX_ENABLED                                             STD_OFF
#define CANIF_USER_TX_ENABLED                                            STD_OFF
#define CANIF_XCP_ENABLED                                                STD_OFF
#define CANIF_J1939TP_ENABLED                                            STD_OFF
#define CANIF_ECUM_ENABLED                                               STD_ON
#define CANIF_PUBLIC_WAKEUP_CHECK_VALID_BY_NM                            STD_OFF
#define CANIF_BASIC_CAN_SUPPORT                                          STD_OFF
#define CANIF_BASIC_CAN_SUPPORT_LIST                                     STD_OFF
#define CANIF_RXPDU_CANID_RANGE                                          STD_OFF
#define CANIF_XCORE_CFG_ENABLED                                        (STD_OFF)

#define CANIF_TOTAL_TXPDUS                                                    5u
#define CANIF_TOTAL_TXBUFFERS                                                 5u
#define CANIF_TOTAL_CTRLS                                                     1u
#define CANIF_TOTAL_DYNAMIC_PDUS                                              0u
#define CANIF_RX_DYNAMIC_PDUS                                                 0u
#define CANIF_NUM_TRANSCEIVERS                                                 0
#define CANIF_MAX_PDU_INDEX                                              0xFFFFu
#define CanIf_CFG_Size_Of_CANID                               sizeof(Can_IdType)
#define CANIF_CFG_NUM_CANRXPDUIDS                                            11u
#define CANIF_CFG_TOTAL_HRH_NUM                                              11u
#define CANIF_CFG_TOTAL_HOH_NUM                                              16u
#define CANIF_CFG_NUM_HRH                                                    11u
#define CANIF_CFG_NUM_CANRXPDUIDS_NOT_USER                                   11u
#define CANIF_CFG_RX_BUFFER_SIZE                                              0u
#define CANIF_CFG_TOTAL_HOH                                                   16
#define CANIF_CFG_NO_OF_TLV                                                    1
#define CANIF_CFG_NO_TRCV_WAKEUP_SUPPORT                                      0u
#define CANIF_CFG_NUM_TRCVS                                                    0
#define CANIF_NUM_CONTROLLERS                                                  1
#define CANIF_TOTAL_RXPDUS                                                    11
#define CANIF_NUM_CUSTID_ENTRIES                                               5
#define CANIF_INSTANCE_ID                                                      1
#define CANIF_VARIANT_INFO                                                     1

#define CfgEcuabCanIf_CanNetwork0                                              0 /* Network - Local CAN body*/
#define CfgEcuabCanIf_CanNetwork0_CanNode0_CanController0                     0u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth1                  0u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth2                  1u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth3                  2u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth4                  3u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth5                  4u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Hth6                  5u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer1               0u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer2               1u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer3               2u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer4               3u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer5               4u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_TxStdMailBox_Buffer6               5u
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_ApplicationCyclic             0
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_ApplicationResponse           1
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_HmiPressure                   2
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_HmiTemperatureAndRefPressure  3
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_UdsResponse_Physical          4
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduTx_BroadcastEcuSoftwareID        5

#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_ApplicationRequest            0
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_BcmPeripheralMasterClock      1
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_EspWheelSpeedFront            2
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_UdsCommand_Physical           3
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_UdsCommand_Functional         4
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_EspWheelSpeedRear             5
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_EspWheelPulseStamped          6
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_TmmStatus                     7
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_DataDebug                     8
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_GateWayVehicleStatus          9
#define CfgEcuabCanIf_CanNetwork0_CanNode0_PduRx_VmsStatusRequest             10

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   P2VAR(uint8,TYPEDEF,CANIF_APPL_DATA) SduDataPtr;
   PduLengthType                        SduLength;
   Can_IdType                           SduCanId;
}CanIf_PduInfoType;

typedef struct{
   Can_IdType CanId;
   PduIdType  swPduHandle;
   uint8      SduLength;
   uint8      BufferIndex;
}CanIf_Cfg_CanIdBuffer_tst;

typedef enum{
      STANDARD_CAN    = 0x00
   ,  STANDARD_FD_CAN = 0x01
   ,  EXTENDED_CAN    = 0x02
   ,  EXTENDED_FD_CAN = 0x03
}CanIf_Cfg_TxPduCanIdType_ten;

enum BufferIdx{
      CanIf_Buffer_Buffer_Can_Network_CANNODE_0_Tx_Std_MailBox_1_e
   ,  CanIf_Buffer_Buffer_Can_Network_CANNODE_0_Tx_Std_MailBox_2_e
   ,  CanIf_Buffer_Buffer_Can_Network_CANNODE_0_Tx_Std_MailBox_3_e
   ,  CanIf_Buffer_Buffer_Can_Network_CANNODE_0_Tx_Std_MailBox_4_e
   ,  CanIf_Buffer_Buffer_Can_Network_CANNODE_0_Tx_Std_MailBox_5_e
};

enum HthIdx{
      CanIf_Hth_Can_Network_CANNODE_0_Tx_Std_MailBox_1_e
   ,  CanIf_Hth_Can_Network_CANNODE_0_Tx_Std_MailBox_2_e
   ,  CanIf_Hth_Can_Network_CANNODE_0_Tx_Std_MailBox_3_e
   ,  CanIf_Hth_Can_Network_CANNODE_0_Tx_Std_MailBox_4_e
   ,  CanIf_Hth_Can_Network_CANNODE_0_Tx_Std_MailBox_5_e
};

enum CtrlIdx{
   CanIf_Ctrl_Can_Network_CANNODE_0_e
};

typedef enum{
      CANIF_NO_UL = 0
   ,  CAN_NM
   ,  CAN_TP
   ,  CAN_TSYN
   ,  J1939NM
   ,  J1939TP
   ,  PDUR
   ,  XCP
   ,  CDD
   ,  USER
   ,  MAX_USER_TYPE
}CanIf_Cfg_UserType_ten;

typedef enum{
      CANIF_BASIC
   ,  CANIF_FULL
}CanIf_Cfg_CanHandleType_ten;

typedef enum{
      CANIF_PRV_FULL_E = 0
   ,  CANIF_PRV_BASIC_RANGE_E
   ,  CANIF_PRV_BASIC_LIST_E
}CanIf_Prv_HrhType_ten;

typedef enum{
      CANIF_DLC_OK = 0
   ,  CANIF_DLC_E_FAILED
}CanIf_DlcErrorReturnType;

typedef struct{
#if CANIF_CFG_TRCV_DRV_SUPPORT == STD_ON
   P2FUNC(void, TYPEDEF, User_TransceiverModeIndication) (VAR(uint8,AUTOMATIC) ,VAR(CanTrcv_TrcvModeType,AUTOMATIC));
#if (CANIF_CFG_TRCV_WAKEUP_SUPPORT == STD_ON && CANIF_PUBLIC_WAKEUP_CHECK_VALIDATION_SUPPORT == STD_ON)
   P2FUNC(void, TYPEDEF, User_ValidateWakeupEvent) (VAR(EcuM_WakeupSourceType,AUTOMATIC) WakeupSource);
#endif
#endif
#if(CANIF_PUBLIC_PN_SUPPORT == STD_ON)
   P2FUNC(void, TYPEDEF, User_ClearTrcvWufFlagIndication) (VAR(uint8,AUTOMATIC) Transceiver);
   P2FUNC(void, TYPEDEF, User_CheckTrcvWakeFlagIndication) (VAR(uint8,AUTOMATIC) Transceiver);
   P2FUNC(void, TYPEDEF, User_ConfirmPnAvailability) (VAR(uint8,AUTOMATIC) TransceiverId);
#endif
   P2FUNC(void, TYPEDEF, User_ControllerBusOff) (VAR(uint8,AUTOMATIC) ControllerId);
   P2FUNC(void, TYPEDEF, User_ControllerModeIndication) (VAR(uint8,AUTOMATIC) ControllerId, VAR(CanIf_ControllerModeType,AUTOMATIC) ControllerMode);
#if (CANIF_RB_ERROR_PASSIVE_SUPPORT != STD_OFF)
   P2FUNC(void, TYPEDEF, User_ControllerErrorPassive) (VAR(uint8,AUTOMATIC));
#endif
#if (CANIF_CFG_DLC_CHECK != STD_OFF)
   P2FUNC(CanIf_DlcErrorReturnType, TYPEDEF, Dlc_Error_Notification) (VAR(PduIdType,AUTOMATIC) ,VAR(uint8,AUTOMATIC));
#endif
}CanIf_CallbackFuncType;

#if(CANIF_TRCV_WAKEUP_SUPPORT== STD_ON)
typedef struct{
   uint8 TransceiverId;
   uint8 ControllerId;
   EcuM_WakeupSourceType WakeupSourceId;
}CanIf_Wakeup;
#endif

typedef struct{
   P2FUNC(void, TYPEDEF, CddRxIndication)(VAR(PduIdType, AUTOMATIC),P2CONST(PduInfoType, AUTOMATIC,CANIF_APPL_CONST));
} CanIf_CddRxCbk_Prototype;

typedef struct{
   CanIf_Prv_HrhType_ten   HrhInfo_e;
   PduIdType               PduIdx_t;
   uint32                  NumRxPdus_u32;
   boolean                 HrhRangeMask_b;
   uint8                   ControllerId_u8;
#if (CANIF_RB_READMSGID_API == STD_ON)
   Can_IdType              CanId_t;
#endif
#if (CANIF_RB_CHANGERXPDUID_API != STD_OFF)
   Can_HwHandleType        CanObjectId;
#endif
}CanIf_Cfg_Hrhtype_tst;

typedef struct{
#if(STD_ON == CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API) || (CANIF_PUBLIC_READRXPDU_DATA_API != STD_OFF)
   uint8 RxPduReadNotifyReadDataStatus_u8;
#endif
#if(CANIF_PUBLIC_READRXPDU_DATA_API == STD_ON)
   uint16    RxBuffer_u16;
#endif
#if((CANIF_PUBLIC_WAKEUP_CHECK_VALIDATION_SUPPORT == STD_ON) && (CANIF_PUBLIC_WAKEUP_CHECK_VALID_BY_NM== STD_ON))
   boolean ULisCanNm_b;
#endif
   uint8_least IndexForUL_u8;
   uint8 CanIdtype_u8;
   uint8 RxPduDlc_u8;
#if (CANIF_RB_CALIBRATION == STD_ON)
    P2FUNC(uint8, TYPEDEF,  getRxPduDlc)(void);
#endif
#if CANIF_METADATA_SUPPORT == STD_ON
   uint32 RxPduCanIdMask_u32;
   uint8 MetadataLength_u8;
#endif
   Can_IdType RxPduCanId;
#if (CANIF_RB_CALIBRATION == STD_ON)
   P2FUNC(Can_IdType, TYPEDEF,  getCanId)(void);
#endif
   PduIdType Hrhref_t;
   PduIdType RxPduTargetId_t;
#if (CANIF_RB_CHANGERXPDUID_API != STD_OFF)
   PduIdType RxPduType;
#endif
}CanIf_Cfg_RxPduType_tst;

typedef struct{
   P2FUNC(void, TYPEDEF, CanIfRxPduIndicationName) (VAR(PduIdType,AUTOMATIC), P2CONST(PduInfoType, TYPEDEF, CANIF_APPL_DATA ));
}CanIf_RxCbk_Prototype;

typedef struct{
   P2FUNC(void, TYPEDEF, CanIfRxPduUserRxIndicationUser) (VAR(PduIdType,AUTOMATIC), P2CONST(CanIf_PduInfoType, TYPEDEF, CANIF_APPL_DATA ));
}CanIf_RxUSERCbk_Prototype;

#if (CANIF_CFG_RX_RANGE_CONFIG == STD_ON)
typedef struct{
#if (CANIF_RB_CALIBRATION == STD_ON)
   P2FUNC(Can_IdType, TYPEDEF,  getLowerCanId_t)(void);
   P2FUNC(Can_IdType, TYPEDEF,  getUpperCanId_t)(void);
#else
   Can_IdType      LowerCanId_t;
   Can_IdType      UpperCanId_t;
#endif
   PduIdType       PduIdx_t;
}CanIf_RxPduRangeConfigType_tst;
#endif

#if CANIF_CFG_HRH_LIST_ENABLED == STD_ON
typedef struct{
#if (CANIF_RB_CALIBRATION == STD_ON)
   P2FUNC(Can_IdType, TYPEDEF,  getCanIdLst_t)(void);
#else
   Can_IdType      CanId_t;
#endif
   PduIdType       PduIdx_t;
}CanIf_RxPduListConfigType_tst;
#endif

typedef struct{
   P2FUNC(void, CANIF_APPL_CODE, UserTxConfirmation)(PduIdType);
} CanIf_TxCbk_Prototype;

typedef struct{
#if(CANIF_PUBLIC_TXBUFFERING ==STD_ON)
   uint32* BufferIdPtr;
   uint32  TotalBufferCount;
   uint32* TxPduIdPtr;
   uint32  TotalTxPduCount;
#endif
   uint8   CtrlId;
   uint8   CtrlCanCtrlRef;
   boolean CtrlWakeupSupport;
#if (CANIF_PUBLIC_PN_SUPPORT == STD_ON)
   boolean PnCtrlEn;
#endif
}CanIf_Cfg_CtrlConfig_tst;

typedef struct{
   const CanIf_Cfg_CtrlConfig_tst   *CanIf_CtrlConfigPtr;
   Can_HwHandleType              CanObjectId;
   CanIf_Cfg_CanHandleType_ten   CanHandleType;
}CanIf_Cfg_HthConfig_tst;

typedef struct{
   const CanIf_Cfg_HthConfig_tst   *CanIf_HthConfigPtr;
#if (CANIF_PUBLIC_TXBUFFERING == STD_ON)
   uint8*                      DataBuf;
   CanIf_Cfg_CanIdBuffer_tst*   CanIdBuf;
   uint32                       CanIfBufferId;
   uint8                        CanIfBufferSize;
   uint8 CanIfBufferMaxDataLength;
#endif
}CanIf_Cfg_TxBufferConfig_tst;

typedef struct{
   const CanIf_Cfg_TxBufferConfig_tst   *CanIf_TxBufferConfigPtr;
#if(CANIF_METADATA_SUPPORT == STD_ON)
   uint32                            TxPduCanIdMask;
   uint8                             MetaDataLength;          /*Max value = 4*/
#endif
   PduIdType                         TxPduId;
   PduIdType                         TxPduTargetPduId;
   PduIdType                         TxPduType;
   CanIf_Cfg_TxPduCanIdType_ten      TxPduCanIdType;
   CanIf_Cfg_UserType_ten            TxPduTxUserUL;
   P2FUNC(void, CANIF_APPL_CODE, UserTxConfirmation)(PduIdType);
   Can_IdType                        TxPduCanId;
#if (CANIF_PUBLIC_PN_SUPPORT == STD_ON)
   boolean                           TxPduPnFilterPdu;
#endif
#if (CANIF_READTXPDU_NOTIFY_STATUS_API == STD_ON)
   boolean                           TxPduReadNotifyStatus;
#endif
#if(CANIF_TRIGGERTRANSMIT_SUPPORT== STD_ON)
   P2FUNC(Std_ReturnType, CANIF_APPL_CODE, UserTriggerTransmit)(PduIdType, PduInfoType*);
   boolean                           TxPduTriggerTransmit;
#endif

boolean TxTruncEnabled_b;
   uint8 TxPduLength_u8;
}CanIf_Cfg_TxPduConfig_tst;

#if (CANIF_XCORE_CFG_ENABLED != STD_OFF)
typedef enum{
   CANIF_XCORE_PIPE_RX = 0,
   CANIF_XCORE_PIPE_TX,
   CANIF_XCORE_PIPE_TXCONF
}CanIf_XCore_PipeProcesingType;

typedef struct {
   uint16 PipeId_u16;
   uint16 SrcCoreId_u16;        /* Pipe Source core ID */
   uint16 DestCoreId_u16;       /* Pipe Destination core ID */
   uint32 FifoRamSizeBytes_u32; /* Size of the associated FIFO in bytes */
   uint32 DestFlags_u32;        /* The properties of the receiver on the destination core: (BIT0, BIT1) = {0x0 = "POLLING"; 0x1 = "Task"; 0x2 = "SWI"} */
   TaskType DestRecvId;       /* TaskID of the receiver on the destination core. */
   void* PipeFifoRam_pv;        /* FIFO for PIPE. It is placed either in shared RAM or in the detstination core local RAM */
   CanIf_XCore_PipeProcesingType PipeType; /*Pipe proccessing type */
}CanIf_XCore_PipeConfigType_st;


typedef struct {
   uint8 CanIf_XCoreCanControllerCoreAffinity[CANIF_XCORE_NUMCANCTRL];                     /* Used to identify the destination core of a specific Can transmit operation based on the Controller id. */
   uint8 CanIf_XCoreUserTypeCoreAffinity[MAX_USER_TYPE];                                              /* Used to identify the destination core of a specific Tx confirmation/Rx indication based on the configured UserType. */
   uint16 CanIf_XCoreTxPipeMatrix[CANIF_XCORE_NUMCORES][CANIF_XCORE_NUMCORES];             /* Used to determine the Tx pipe id based on the src core id and destination core id. */
   uint16 CanIf_XCoreTxConfirmationPipeMatrix[CANIF_XCORE_NUMCORES][CANIF_XCORE_NUMCORES]; /* Used to determine the Tx confirmation pipe id based on the src core id and destination core id. */
   uint16 CanIf_XCoreRxPipeMatrix[CANIF_XCORE_NUMCORES][CANIF_XCORE_NUMCORES];             /* Used to determine the Rx pipe id based on the src core id and destination core id. */
   uint16 NumPipes_u16;                                                                    /* Number of configured pipes */
   CanIf_XCore_PipeConfigType_st PipeConfigs_ast[CANIF_XCORE_MAX_NUM_PIPES];               /* Holds the pipe configurations */
}CanIf_XCore_ConfigType;
#endif

typedef struct{
#if(CANIF_CFG_RX_FEATURE_ENABLED== STD_ON)
   P2CONST(CanIf_Cfg_Hrhtype_tst,TYPEDEF,CANIF_CFG_CONST)    HrhConfig_pcst;
   P2CONST(CanIf_Cfg_RxPduType_tst,TYPEDEF,CANIF_CFG_CONST)  RxPduConfig_pcst;
   VAR(PduIdType,TYPEDEF)                NumCanRxPduId_t;
#endif
   VAR(uint8,TYPEDEF)                    NumCanCtrl_u8;
#if(CANIF_CFG_RX_FEATURE_ENABLED== STD_ON)
   VAR(PduIdType,TYPEDEF)                NumCddRxPdus_t;
#if (CANIF_CFG_RX_RANGE_CONFIG == STD_ON)
   P2CONST(CanIf_RxPduRangeConfigType_tst,TYPEDEF,CANIF_CFG_CONST)RangeCfg_tpst;
#endif

#if (CANIF_CFG_HRH_LIST_ENABLED == STD_ON)
   P2CONST(CanIf_RxPduListConfigType_tst,TYPEDEF,CANIF_CFG_CONST)ListCfg_tpst;
#endif
   const uint16                         *RxPduIdTable_Ptr;
   const uint16                         *HrhPduIdTable_Ptr;
#endif
   VAR(uint8,TYPEDEF)CfgSetIndex_u8;
#if(CANIF_CFG_TX_FEATURE_ENABLED== STD_ON)
   const CanIf_Cfg_TxPduConfig_tst      *CanIf_TxPduConfigPtr;
   const CanIf_Cfg_TxBufferConfig_tst   *CanIf_TxBufferConfigPtr;
#endif
   const CanIf_Cfg_CtrlConfig_tst       *CanIf_CtrlConfigPtr;
   uint32                                NumOfTxPdus;
   uint32                                NumOfTxBuffers;
   const uint16                         *TxPduIdTable_Ptr;
   const uint8                          *CtrlIdTable_Ptr;
#if CANIF_CFG_USER_RX_ENABLED == STD_ON
   const CanIf_RxUSERCbk_Prototype      *RxUSER_Ptr;
#endif
#if CANIF_CFG_RX_FEATURE_ENABLED == STD_ON
   const CanIf_RxCbk_Prototype          *RxAutosarUL_Ptr;
#endif
#if(CANIF_CANNM_TXID_FILTER != STD_OFF)
   P2CONST(Can_IdType,TYPEDEF,CANIF_CFG_CONST) NmtxIdPtr;
#endif
#if (CANIF_XCORE_CFG_ENABLED != STD_OFF)
   P2CONST(CanIf_XCore_ConfigType,TYPEDEF,CANIF_CFG_CONST) CanIf_XCoreConfigPtr;
#endif
}CanIf_ConfigType;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(uint32, CANIF_VAR) CanIf_CustId_Table[];

#define CANIF_START_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"
extern CONST(CanIf_ConfigType, CANIF_CONST) CanIf_Config;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
#include "CanIf_MemMap.h"

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
