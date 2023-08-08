cmake_minimum_required(VERSION 3.15)

project(BasePartCounter CXX)

# Language specs
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Thaumium
add_library(BasePartCounter SHARED
        "dllmain.cpp"
        "framework.h"
        "memory.h"
        "memory.cpp"
)

target_include_directories(BasePartCounter PRIVATE
        ${CMAKE_SOURCE_DIR}/thirdparty/include
)

target_link_libraries(BasePartCounter PRIVATE
        ${CMAKE_SOURCE_DIR}/thirdparty/lib/MinHook.x64.lib
)

target_precompile_headers(BasePartCounter PRIVATE pch.h)

set_target_properties(BasePartCounter PROPERTIES
        OUTPUT_NAME BasePartCounter
)   

# Targets
add_subdirectory(proxy)