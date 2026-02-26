cmake_minimum_required(VERSION 3.14)
project(DocIncProject)

set(CMAKE_CXX_STANDARD 17)

# -------------------------
# Main Source Files
# -------------------------

add_library(DocIncLib
    Statement.cpp
    Document.cpp
    Bank.cpp
)

# -------------------------
# GoogleTest
# -------------------------

enable_testing()
find_package(GTest REQUIRED)

add_executable(runTests
    tests/Statement_Test.cpp
    tests/Bank_Test.cpp
)

target_link_libraries(runTests
    DocIncLib
    GTest::GTest
    GTest::Main
)

add_test(NAME runTests COMMAND runTests)
