cmake_minimum_required(VERSION 3.14)
project(TicTacToe)

add_compile_options(-Wall -Wextra -pedantic -Werror)

set(CMAKE_CXX_STANDARD 17)
set(Sources
uts/BoardTest.cpp
uts/FieldTest.cpp
)


include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_library(implementations src/Board.cpp)
target_include_directories(implementations PUBLIC include)
add_executable(
  my_test
  ${Sources}
)
target_link_libraries(
  my_test
  GTest::gtest_main
  GTest::gmock_main
  implementations
)

include(GoogleTest)
gtest_discover_tests(my_test)
target_compile_features(implementations PUBLIC cxx_std_20)
target_compile_features(my_test PUBLIC cxx_std_20)