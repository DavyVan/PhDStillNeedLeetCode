cmake_minimum_required(VERSION 3.10)
project(LeetCode)

# Install: Move all executable to ./bin
set(INSTALL_DIR "${CMAKE_CURRENT_LIST_DIR}/bin")
# force to enable C++14 (Required by GoogleTest 1.13.x)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(Q "Input the problem number to build (0 to build all)" 0)    # used in ./problems/CMakeLists.txt
option(T "Enable testing or not" ON)

enable_testing()

if (T)
    message(STATUS "Testing is enabled.")
    include(CheckCXXCompilerFlag)

    message(STATUS "Google Test has been set to link dynamically.")
    SET(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/googletest
                    ${CMAKE_CURRENT_SOURCE_DIR}/googletest/build
                    EXCLUDE_FROM_ALL)
endif(T)

include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(problems)

