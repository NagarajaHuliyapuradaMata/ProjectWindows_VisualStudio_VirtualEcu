#ifndef COMSTACK_TYPES_H
#define COMSTACK_TYPES_H
/******************************************************************************/
/* File   : Types_StackCom.h                                                  */
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
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"
#include "ComStack_Cfg.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMTYPE_VENDOR_ID                                                0x0001u
#define COMTYPE_MODULE_ID                                                0x00C4u

#define COMTYPE_SW_MAJOR_VERSION                                           0x08u
#define COMTYPE_SW_MINOR_VERSION                                           0x00u
#define COMTYPE_SW_PATCH_VERSION                                           0x00u
#define COMTYPE_AR_RELEASE_MAJOR_VERSION                                   0x04u
#define COMTYPE_AR_RELEASE_MINOR_VERSION                                   0x02u
#define COMTYPE_AR_RELEASE_REVISION_VERSION                                0x02u

#define BUSTRCV_OK                                                          0x00
#define BUSTRCV_E_ERROR                                                     0x01

#define NTFRSLT_OK                                                         0x00u
#define NTFRSLT_E_NOT_OK                                                   0x01u
#define NTFRSLT_E_TIMEOUT_A                                                0x02u
#define NTFRSLT_E_TIMEOUT_BS                                               0x03u
#define NTFRSLT_E_TIMEOUT_CR                                               0x04u
#define NTFRSLT_E_WRONG_SN                                                 0x05u
#define NTFRSLT_E_INVALID_FS                                               0x06u
#define NTFRSLT_E_UNEXP_PDU                                                0x07u
#define NTFRSLT_E_WFT_OVRN                                                 0x08u
#define NTFRSLT_E_ABORT                                                    0x09u
#define NTFRSLT_E_NO_BUFFER                                                0x0Au
#define NTFRSLT_E_CANCELATION_OK                                           0x0Bu
#define NTFRSLT_E_CANCELATION_NOT_OK                                       0x0Cu
#define NTFRSLT_PARAMETER_OK                                               0x0Du
#define NTFRSLT_E_PARAMETER_NOT_OK                                         0x0Eu
#define NTFRSLT_E_RX_ON                                                    0x0Fu
#define NTFRSLT_E_VALUE_NOT_OK                                             0x10u

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8 Type_StackCom_tErrorBusTrcv;
typedef uint8 Type_StackCom_tHandleNetwork;
typedef uint8 Type_StackCom_tHandlePnc;
typedef uint8 Type_StackCom_tIdConfigIcom;
typedef uint8 Type_StackCom_tResultNotification;

typedef enum{
      eParameterTp_StMin
   ,  eParameterTp_Bs
   ,  eParameterTp_Bc
   ,  eParameterTp_Bfs
}Type_StackCom_eParameterTp;

typedef enum{
      eResultBufferRequest_Ok
   ,  eResultBufferRequest_Nok
   ,  eResultBufferRequest_Busy
   ,  eResultBufferRequest_Overflow
}Type_StackCom_eResultBufferRequest;

typedef enum{
      eStateDataTp_Confirmed
   ,  eStateDataTp_Retry
   ,  eStateDataTp_ConfirmationPending
}Type_StackCom_eStateDataTp;

typedef enum{
      eErrorIcomSwitch_Ok
   ,  eErrorIcomSwitch_Nok
}Type_StackCom_eErrorIcomSwitch;

typedef struct{
   uint8*          ptru8DataSdu;
   uint8*          ptru8DataMeta;
   Type_tLengthPdu tLengthSdu;
}Type_StackCom_stInfoPdu;

typedef struct{
   Type_StackCom_eStateDataTp eStateDataTp;
   Type_tLengthPdu            tLengthPdu;
}Type_StackCom_stInfoRetry;

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

#endif

