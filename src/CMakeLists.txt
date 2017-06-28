include_directories(${StateMachine_SOURCE_DIR}/sr/inc)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH, ${PROJECT_BINARY_DIR}/bin)

file(GLOB_RECURSE SOURCES
    "*.cpp"
)

add_executable(StateMachine ${SOURCES})