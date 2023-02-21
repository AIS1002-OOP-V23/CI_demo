cmake_minimum_required(VERSION 3.24)
project(CI_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(CI_test main.cpp)
target_include_directories(CI_test PUBLIC "${CMAKE_SOURCE_DIR}/include")

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.13.8
)
FetchContent_MakeAvailable(Catch2)

enable_testing()
add_subdirectory(tests)
