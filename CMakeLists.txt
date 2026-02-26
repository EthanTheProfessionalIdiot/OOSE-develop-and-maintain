cmake_minimum_required(VERSION 3.16)

# Project name
project(DocIncProject VERSION 1.0 LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable testing
enable_testing()

# ========================
# Source Files
# ========================

# Collect all .cpp files in src directory
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    src/*.cpp
)

# Create main project library from your UML-generated code
add_library(DocIncLib ${SRC_FILES})

target_include_directories(DocIncLib PUBLIC
    ${PROJECT_SOURCE_DIR}/src
)

# ========================
# GoogleTest Setup
# ========================

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Prevent overriding parent project settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# ========================
# Test Files
# ========================

# Collect all test .cpp files
file(GLOB_RECURSE TEST_FILES CONFIGURE_DEPENDS
    tests/*.cpp
)

add_executable(runTests ${TEST_FILES})

target_link_libraries(runTests
    DocIncLib
    GTest::gtest_main
)

# Register tests with CTest
include(GoogleTest)
gtest_discover_tests(runTests)

# ========================
# Optional: Warnings
# ========================

if(MSVC)
    target_compile_options(DocIncLib PRIVATE /W4)
else()
    target_compile_options(DocIncLib PRIVATE -Wall -Wextra -Wpedantic)
endif()
