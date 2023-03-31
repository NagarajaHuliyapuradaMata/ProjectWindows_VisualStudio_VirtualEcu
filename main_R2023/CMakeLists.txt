cmake_minimum_required(VERSION 3.23.2)

project(
   Windows_VisualStudio_VirtualEcu_R2023
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
   -std=c++2a
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   Windows_VisualStudio_VirtualEcu_R2023

   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.cpp

   ${PROJECT_SOURCE_DIR}/source/wrappers/CalloutStubsServiceSwcEcuM.cpp
   ${PROJECT_SOURCE_DIR}/source/wrappers/CalloutStubsServiceSwcOs.cpp

   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgServiceSwcDcm.cpp
   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgEcuabCanIf.cpp

   ${PROJECT_SOURCE_DIR}/source/ServiceSwcCanSm/ServiceSwcCanSm.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcCanTp/ServiceSwcCanTp.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcCom/ServiceSwcCom.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcComM/ServiceSwcComM.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcDcm/ServiceSwcDcm.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcDem/ServiceSwcDem.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcDet/ServiceSwcDet.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcEcuM/ServiceSwcEcuM.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcNvM/ServiceSwcNvM.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcPduR/ServiceSwcPduR.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcStartUp/ServiceSwcStartUp.cpp

   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/EcuabCanIf.cpp
   ${PROJECT_SOURCE_DIR}/source/EcuabFee/EcuabFee.cpp

   ${PROJECT_SOURCE_DIR}/source/McalAdc/McalAdc.cpp
   ${PROJECT_SOURCE_DIR}/source/McalCan/McalCan.cpp
   ${PROJECT_SOURCE_DIR}/source/McalDio/McalDio.cpp
   ${PROJECT_SOURCE_DIR}/source/McalFls/McalFls.cpp
   ${PROJECT_SOURCE_DIR}/source/McalGpt/McalGpt.cpp
   ${PROJECT_SOURCE_DIR}/source/McalWdg/McalWdg.cpp

   ${PROJECT_SOURCE_DIR}/source/wrappers/LibAutosarFifo.cpp

)

target_include_directories(
   Windows_VisualStudio_VirtualEcu_R2023 PUBLIC
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"

   "${PROJECT_SOURCE_DIR}/source/ServiceSwcCanSm"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcCanTp"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcCom"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcComM"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcDcm"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcDem"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcDet"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcEcuM"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcNvM"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcPduR"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcStartUp"

   "${PROJECT_SOURCE_DIR}/source/EcuabCanIf"
   "${PROJECT_SOURCE_DIR}/source/EcuabFee"

   "${PROJECT_SOURCE_DIR}/source/McalAdc"
   "${PROJECT_SOURCE_DIR}/source/McalCan"
   "${PROJECT_SOURCE_DIR}/source/McalDio"
   "${PROJECT_SOURCE_DIR}/source/McalFls"
   "${PROJECT_SOURCE_DIR}/source/McalGpt"
   "${PROJECT_SOURCE_DIR}/source/McalWdg"

   "${PROJECT_SOURCE_DIR}/source/wrappers"

)

