cmake_minimum_required(VERSION 2.8)

if (WIN32)
    set (FB_PLATFORM_NAME "Win")
elseif(APPLE)
    set (FB_PLATFORM_NAME "Mac")
elseif(UNIX)
    set (FB_PLATFORM_NAME "X11")
endif()

macro (include_platform)

    if (EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${FB_PLATFORM_NAME}/projectDef.cmake)
        include(${CMAKE_CURRENT_SOURCE_DIR}/${FB_PLATFORM_NAME}/projectDef.cmake)
    else()
        message ("Could not find a ${FB_PLATFORM_NAME} directory for the current project")
    endif()

endmacro(include_platform)
set(PROJNAME dive-agent)
project(${PROJNAME})

file (GLOB SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    [^.]*.cpp
    [^.]*.h
    [^.]*.cmake
    )

set(FIND_LIBRARY_USE_LIB64_PATHS FALSE)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#find_package( OpenSSL REQUIRED)
#include_directories(${OpenSSL_INCLUDE_DIR})

find_package( Curl REQUIRED)
include_directories(${Curl_INCLUDE_DIR})
link_directories(${Curl_LIBRARY_DIRS})


find_library(LIBICONV iconv)
message("${LIBICONV}")

include_platform()