#pragma once
/******************************************************************************/
/* File   : CanTypes.hpp                                                      */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
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
#define McalCan_LengthBuffer                                                  10 //TBD: as per hardware capacity and mail-inbox size need

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      CfgEcuabCanIf_IdCanFrameExtendedRxUdsFunctional  = 0x700
   ,  CfgEcuabCanIf_IdCanFrameExtendedRxUdsPhysical    = 0x300
   ,  CfgEcuabCanIf_IdCanFrameExtendedRxBcmVehicleInfo = 0x100
}McalCan_teIdFrameExtended;

typedef struct{
   McalCan_teIdFrameExtended IdCan; //TBD union  : 29;
   uint32                    THLEN  :  1;
   uint32                    RTR    :  1;
   uint32                    IDE    :  1;
   uint32                    TS     : 16;
   uint32                    LBL    : 12;
   uint32                    DLC    :  4;
   uint8                     data[8];
}McalCan_tstFrameExtended;

typedef union{
   McalCan_tstFrameExtended McalCan_stFrameExtended;
}McalCan_tstRxFifioElement;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern McalCan_tstRxFifioElement McalCan_astRxFifio[McalCan_LengthBuffer];
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
