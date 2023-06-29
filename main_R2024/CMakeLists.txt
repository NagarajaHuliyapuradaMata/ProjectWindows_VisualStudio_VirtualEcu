cmake_minimum_required(VERSION 3.23.2)

project(
   Windows_VisualStudio_VirtualEcu_R2024
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
   -std=c2x
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   Windows_VisualStudio_VirtualEcu_R2024

   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgMcalAdc.c
   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgSwcServiceDcm.c
   ${PROJECT_SOURCE_DIR}/source/McalAdc/McalAdc.c
#  ${PROJECT_SOURCE_DIR}/source/McalCan/McalCan.c
   ${PROJECT_SOURCE_DIR}/source/McalWdg/McalWdg.c
   ${PROJECT_SOURCE_DIR}/source/LibAutosar/LibAutosar_MovingAverage.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServiceEcuM_Core.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServiceSchM_Core.c
   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.c
)

target_include_directories(
   Windows_VisualStudio_VirtualEcu_R2024 PUBLIC
   "${PROJECT_SOURCE_DIR}/source/wrappers"
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/LibAutosar"
   "${PROJECT_SOURCE_DIR}/source/McalAdc"
#  "${PROJECT_SOURCE_DIR}/source/McalCan"
   "${PROJECT_SOURCE_DIR}/source/McalMcu"
   "${PROJECT_SOURCE_DIR}/source/McalWdg"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDcm"
)

