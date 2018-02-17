# Find Boost library
set(Boost_NO_BOOST_CMAKE ON) #  Don't do a find_package in config mode before searching for a regular boost install.
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

# Get all test files
file(GLOB_RECURSE TEST_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

# Create test executable
add_executable(${PROJECT_NAME}_test ${TEST_FILES})
target_link_libraries(${PROJECT_NAME}_test  ${PROJECT_NAME} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

# Override output directory to keep tests in the build directory
set_target_properties(${PROJECT_NAME}_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR} )

# This is a trick to display tests individually, rather than a global passed /failed summary
# Read each test files
foreach(FILE ${TEST_FILES})
    file(READ "${FILE}" SOURCE_FILE_CONTENTS)

    # Find test declarations
    string(REGEX MATCHALL "BOOST_AUTO_TEST_CASE\\( *([A-Za-z_0-9]+) *\\)" 
       FOUND_TESTS ${SOURCE_FILE_CONTENTS})
    # Get test name
    foreach(HIT ${FOUND_TESTS})
        string(REGEX REPLACE ".*\\( *([A-Za-z_0-9]+) *\\).*" "\\1" TEST_NAME ${HIT})

    # Create individual test for each declaration
    add_test(NAME "${FILE}.${TEST_NAME}" 
         COMMAND ${PROJECT_NAME}_test
         --run_test=${TEST_NAME} --catch_system_error=yes)
    endforeach()
endforeach()
