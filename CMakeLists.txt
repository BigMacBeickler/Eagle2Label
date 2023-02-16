o cmake_minimum_required(VERSION 3.23)
project(Eagle2Label)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Eagle2Label
        main.cpp filereader.cpp filereader.h)
