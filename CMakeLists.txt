cmake_minimum_required(VERSION 3.5)

project(StateMachine)


include_directories(
    ${PROJECT_SOURCE_DIR}/include
#    ${PROJECT_BINARY_DIR}/include   # add the binary tree to the search path so that we will find Version.h
#    ${Boost_INCLUDE_DIRS}
)

enable_testing()
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(doc)
add_subdirectory(test)
