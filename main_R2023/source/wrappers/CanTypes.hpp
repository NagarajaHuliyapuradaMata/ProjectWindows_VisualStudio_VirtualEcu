#pragma once
/******************************************************************************/
/* File   : CanTypes.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define McalCan_BufferLength 10 //TBD: as per hardware capacity and mail-inbox size need

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      EcuabCanIf_eHardwareObjectHandle_RxUds_Physical = 0U
   ,  EcuabCanIf_eHardwareObjectHandle_RxUds_Functional
}EcuabCanIf_teHardwareObjectHandle;

typedef enum{
      teStatusRequestBuffer_OK
   ,  teStatusRequestBuffer_E_NOT_OK
   ,  teStatusRequestBuffer_E_BUSY
   ,  teStatusRequestBuffer_E_OVERFLOW
}teStatusRequestBuffer; //TBD: Move to ComStack_Types.h

typedef struct{
   uint32 ID     : 29;
   uint32 THLEN  :  1;
   uint32 RTR    :  1;
   uint32 IDE    :  1;
   uint32 TS     : 16;
   uint32 LBL    : 12;
   uint32 DLC    :  4;
   uint8  data[8];
}McalCan_tstFrameExtended;

typedef struct{
   McalCan_tstFrameExtended          McalCan_stFrameExtended;
   EcuabCanIf_teHardwareObjectHandle eHardwareObjectHandle;
   uint8                             u8IdController;
}McalCan_tstContext;

typedef union{
   McalCan_tstContext                McalCan_stContext;
}McalCan_tuBufferElement;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern McalCan_tuBufferElement McalCan_auBufferRx[McalCan_BufferLength];

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
