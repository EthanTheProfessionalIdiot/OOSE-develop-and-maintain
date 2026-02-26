cmake_minimum_required(VERSION 3.14)
project(DocIncProject)

set(CMAKE_CXX_STANDARD 17)

# -------------------------
# Source Files
# -------------------------

set(SOURCES
    src/Statement.cpp
    src/Document.cpp
    src/Bank.cpp
)

add_library(DocIncLib ${SOURCES})

# -------------------------
# GoogleTest
# -------------------------

enable_testing()
find_package(GTest REQUIRED)

set(TEST_SOURCES
    tests/Statement_Test.cpp
    tests/Bank_Test.cpp
)

add_executable(runTests ${TEST_SOURCES})

target_link_libraries(runTests
    DocIncLib
    GTest::GTest
    GTest::Main
)

add_test(NAME runTests COMMAND runTests)
