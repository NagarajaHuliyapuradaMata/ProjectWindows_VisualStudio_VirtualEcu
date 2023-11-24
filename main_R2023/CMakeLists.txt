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
   ${PROJECT_NAME}

   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.cpp

   ${PROJECT_SOURCE_DIR}/source/wrappers/CalloutStubsSwcServiceEcuM.cpp
   ${PROJECT_SOURCE_DIR}/source/wrappers/CalloutStubsSwcServiceOs.cpp

   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgSwcServiceDcm.cpp
   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgSwcServiceEcuM.cpp
   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgEcuabCanIf.cpp

   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/SwcServiceCanSm.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanTp/SwcServiceCanTp.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/SwcServiceCom.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/SwcServiceComM.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/SwcServiceDcm.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDem/SwcServiceDem.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDet/SwcServiceDet.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceEcuM/SwcServiceEcuM.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceNvM/SwcServiceNvM.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceOs/SwcServiceOs.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServicePduR/SwcServicePduR.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcServiceStartUp/SwcServiceStartUp.cpp

   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/EcuabCanIf.cpp
   ${PROJECT_SOURCE_DIR}/source/EcuabFee/EcuabFee.cpp

   ${PROJECT_SOURCE_DIR}/source/McalAdc/McalAdc.cpp
   ${PROJECT_SOURCE_DIR}/source/McalCan/McalCan.cpp
   ${PROJECT_SOURCE_DIR}/source/McalDio/McalDio.cpp
   ${PROJECT_SOURCE_DIR}/source/McalFls/McalFls.cpp
   ${PROJECT_SOURCE_DIR}/source/McalGpt/McalGpt.cpp
   ${PROJECT_SOURCE_DIR}/source/McalWdg/McalWdg.cpp

   ${PROJECT_SOURCE_DIR}/source/LibAutosar/LibAutosarFifo.cpp

)

target_include_directories(
   ${PROJECT_NAME} PUBLIC
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"

   "${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceCanTp"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceCom"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceComM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDcm"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDem"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDet"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceEcuM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceNvM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceOs"
   "${PROJECT_SOURCE_DIR}/source/SwcServicePduR"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceStartUp"

   "${PROJECT_SOURCE_DIR}/source/EcuabCanIf"
   "${PROJECT_SOURCE_DIR}/source/EcuabFee"

   "${PROJECT_SOURCE_DIR}/source/McalAdc"
   "${PROJECT_SOURCE_DIR}/source/McalCan"
   "${PROJECT_SOURCE_DIR}/source/McalDio"
   "${PROJECT_SOURCE_DIR}/source/McalFls"
   "${PROJECT_SOURCE_DIR}/source/McalGpt"
   "${PROJECT_SOURCE_DIR}/source/McalWdg"

   "${PROJECT_SOURCE_DIR}/source/LibAutosar"
   "${PROJECT_SOURCE_DIR}/source/wrappers"

)

