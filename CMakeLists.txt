cmake_minimum_required(VERSION 2.8)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../lib") 
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../lib")


project(StateMachine)
set (CMAKE_CXX_STANDARD 11)
include(CMakeToolsHelpers OPTIONAL)

set(Boost_NO_BOOST_CMAKE ON) #  Don't do a find_package in config mode before searching for a regular boost install.
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

option(ENABLE_COVERAGE "Generate coverage information" OFF)

if(ENABLE_COVERAGE)
    add_definitions(--coverage)
endif()
include_directories(${PROJECT_SOURCE_DIR}/include)

enable_testing()
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(doc)
add_subdirectory(test)
