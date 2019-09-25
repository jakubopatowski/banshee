cmake_minimum_required(VERSION 3.1...3.14)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(banshee VERSION 0.1
                DESCRIPTION "Math library"
                LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
              
add_library(banshee src/sorting.cpp)

target_include_directories(banshee
  PUBLIC
      "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      "$<INSTALL_INTERFACE:include>"
  PRIVATE
      .)

install(
  TARGETS banshee
  EXPORT ${PROJECT_NAME}Config
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR})

export(
  TARGETS banshee
  NAMESPACE ${PROJECT_NAME}::
  FILE ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake)

install(
  EXPORT ${PROJECT_NAME}Config
  DESTINATION ${CMAKE_INSTALL_DATADIR}/${PROJECT_NAME}/cmake
  NAMESPACE ${PROJECT_NAME}::)
