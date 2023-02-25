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
   ${PROJECT_SOURCE_DIR}/source/ServiceStartUp/ServiceStartUp.cpp
   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.cpp
)

target_include_directories(
   Windows_VisualStudio_VirtualEcu_R2023 PUBLIC
   "${PROJECT_SOURCE_DIR}/source/wrappers"
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ServiceStartUp"
)

