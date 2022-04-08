cmake_minimum_required(VERSION 3.14)
project(shield)

option(BUILD_TESTS "Build tests" OFF)

add_library(${PROJECT_NAME} INTERFACE)

target_sources(${PROJECT_NAME} INTERFACE
    include/shield/on.h
    include/shield/off.h
)

target_include_directories(${PROJECT_NAME} INTERFACE include)

if(BUILD_TESTS)
  include(CTest)
  add_subdirectory(tests)
endif()
