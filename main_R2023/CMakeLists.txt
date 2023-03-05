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
   ${PROJECT_SOURCE_DIR}/source/ServiceDcm/ServiceDcm.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceDem/ServiceDem.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceDet/ServiceDet.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceNvM/ServiceNvM.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceCanSm/ServiceCanSm.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceCom/ServiceCom.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceComM/ServiceComM.cpp
   ${PROJECT_SOURCE_DIR}/source/ServicePduR/ServicePduR.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceStartUp/ServiceStartUp.cpp
   ${PROJECT_SOURCE_DIR}/source/ServiceSwcEcuM/ServiceSwcEcuM.cpp
   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/EcuabCanIf.cpp
   ${PROJECT_SOURCE_DIR}/source/EcuabCanTp/EcuabCanTp.cpp
   ${PROJECT_SOURCE_DIR}/source/EcuabFee/EcuabFee.cpp
   ${PROJECT_SOURCE_DIR}/source/McalAdc/McalAdc.cpp
   ${PROJECT_SOURCE_DIR}/source/McalCan/McalCan.cpp
   ${PROJECT_SOURCE_DIR}/source/McalDio/McalDio.cpp
   ${PROJECT_SOURCE_DIR}/source/McalFls/McalFls.cpp
   ${PROJECT_SOURCE_DIR}/source/McalGpt/McalGpt.cpp
   ${PROJECT_SOURCE_DIR}/source/McalWdg/McalWdg.cpp

   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.cpp
   ${PROJECT_SOURCE_DIR}/source/wrappers/CalloutStubsServiceSwcEcuM.cpp
)

target_include_directories(
   Windows_VisualStudio_VirtualEcu_R2023 PUBLIC
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ServiceDcm"
   "${PROJECT_SOURCE_DIR}/source/ServiceDem"
   "${PROJECT_SOURCE_DIR}/source/ServiceDet"
   "${PROJECT_SOURCE_DIR}/source/ServiceNvM"
   "${PROJECT_SOURCE_DIR}/source/ServiceCanSm"
   "${PROJECT_SOURCE_DIR}/source/ServiceCom"
   "${PROJECT_SOURCE_DIR}/source/ServiceComM"
   "${PROJECT_SOURCE_DIR}/source/ServicePduR"
   "${PROJECT_SOURCE_DIR}/source/ServiceStartUp"
   "${PROJECT_SOURCE_DIR}/source/ServiceSwcEcuM"
   "${PROJECT_SOURCE_DIR}/source/EcuabCanIf"
   "${PROJECT_SOURCE_DIR}/source/EcuabCanTp"
   "${PROJECT_SOURCE_DIR}/source/EcuabFee"
   "${PROJECT_SOURCE_DIR}/source/McalAdc"
   "${PROJECT_SOURCE_DIR}/source/McalCan"
   "${PROJECT_SOURCE_DIR}/source/McalDio"
   "${PROJECT_SOURCE_DIR}/source/McalFls"
   "${PROJECT_SOURCE_DIR}/source/McalGpt"
   "${PROJECT_SOURCE_DIR}/source/McalWdg"

   "${PROJECT_SOURCE_DIR}/source/wrappers"
)

