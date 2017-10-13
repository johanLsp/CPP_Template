#include_directories(${StateMachine_SOURCE_DIR}/sr/inc)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH, ${PROJECT_BINARY_DIR}/bin)

file(GLOB_RECURSE SOURCES
    "*.cpp"
)

set(LIB_SOURCES ${SOURCES})

list(REMOVE_ITEM LIB_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

# Define two variables in order not to repeat ourselves.
set(LIBRARY_NAME StateMachine)

# Define the library
add_library(${LIBRARY_NAME} SHARED ${LIB_SOURCES})


add_executable(runStateMachine ${SOURCES})