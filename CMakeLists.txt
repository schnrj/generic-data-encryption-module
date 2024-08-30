# Ensure CMake version is compatible with the project requirements
cmake_minimum_required(VERSION 3.10)

# Define the project name and set the version
project(GenericDataEncryptionModule VERSION 1.0 LANGUAGES CXX)

# Specify the required C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Collect source files for the project
set(PROJECT_SOURCES
    src/encryption_module.cpp
    src/main.cpp
)

# Include the directory where header files are located
include_directories(src)

# Define the executable target for the project
add_executable(GenericDataEncryptionModule ${PROJECT_SOURCES})

# List the test source files
set(TEST_SOURCES
    tests/test_encryption_module.cpp
)

# Create an executable for running tests
add_executable(EncryptionModuleTests ${TEST_SOURCES})

# Link the test executable with the main project if necessary
# target_link_libraries(EncryptionModuleTests GenericDataEncryptionModule)

# Enable testing support in CMake
enable_testing()

# Register the test executable with CMake's testing framework
add_test(NAME EncryptionModuleTests COMMAND EncryptionModuleTests)

# Additional configurations or custom targets can be added below
