cmake_minimum_required(VERSION 3.16)
project(CalculatorApp)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Source file of the main app
add_executable(CalculatorApp src/main.cpp src/calculator.cpp)

# Source files for tests
add_executable(tests tests/test_calculator.cpp src/calculator.cpp)
target_link_libraries(tests gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)
