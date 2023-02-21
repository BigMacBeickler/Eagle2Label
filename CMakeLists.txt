cmake_minimum_required(VERSION 3.13)
project(Eagle2Label)

set(CMAKE_CXX_STANDARD 14)

set(DCMAKE_SH="CMAKE_SH-NOTFOUND")

include_directories(.)

add_executable(Eagle2Label
        main.cpp filehandler.cpp filehandler.h data.cpp data.h alltheheaders.h)

if(CMAKE_BUILD_TYPE MATCHES Debug)
    target_compile_definitions(Eagle2Label PUBLIC DEBUG=1)
elseif(CMAKE_BUILD_TYPE MATCHES Release)
    target_compile_definitions(Eagle2Label PUBLIC DEBUG=0)
endif()