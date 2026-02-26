cmake_minimum_required(VERSION 3.14)
project(DocIncProject)

set(CMAKE_CXX_STANDARD 17)

# -------------------------
# 1️⃣ Main Library (PUT IT HERE — near the top) 
# -------------------------

add_library(DocIncLib
    Statement.cpp
    Document.cpp
    Bank.cpp
    Account.cpp
    Date.cpp
)

# -------------------------
# 2️⃣ Enable Testing
# -------------------------

enable_testing()
find_package(GTest REQUIRED)

# -------------------------
# 3️⃣ Test Executable (NOTICE folder is 'test' not 'tests')
# -------------------------

add_executable(runTests
    test/Statement_Test.cpp
    test/Bank_Test.cpp
)

# -------------------------
# 4️⃣ Link Everything
# -------------------------

target_link_libraries(runTests
    DocIncLib
    GTest::GTest
    GTest::Main
)

add_test(NAME runTests COMMAND runTests)
