# Copyright (c) Microsoft Corporation. All rights reserved.
# SPDX-License-Identifier: MIT

cmake_minimum_required (VERSION 3.13)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules")

cmake_minimum_required (VERSION 3.13)
set(TARGET_NAME "my-sample")
project(${TARGET_NAME} LANGUAGES CXX)

include(add_nlohmann_json)

add_executable (
     ${TARGET_NAME}
     src/main.cpp
     )

target_link_libraries(${TARGET_NAME} PRIVATE nlohmann_json::nlohmann_json)
