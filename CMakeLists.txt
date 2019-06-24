cmake_minimum_required(VERSION 3.1...3.14)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(banshee VERSION 0.1
                DESCRIPTION "Very nice project"
                LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
              
add_library(banshee src/testClass.cpp include/testClass.hpp)

target_include_directories(banshee PUBLIC include)

