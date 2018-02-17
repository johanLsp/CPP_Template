# Get all source files (bad practice !)
file(GLOB_RECURSE SOURCES
    "*.cpp"
)

# Define two variables in order not to repeat ourselves.
set(LIBRARY_NAME ${PROJECT_NAME})

# Define the library
set(LIB_SOURCES ${SOURCES})
list(REMOVE_ITEM LIB_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
add_library(${LIBRARY_NAME} SHARED ${LIB_SOURCES})

# Define the executable
add_executable(${PROJECT_NAME}-bin ${SOURCES})
# Two-step trick to end up with the same executable and library name (foo & libfoo)
SET_TARGET_PROPERTIES(${PROJECT_NAME}-bin PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
