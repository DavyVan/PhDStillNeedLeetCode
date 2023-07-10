cmake_minimum_required(VERSION 3.10)
project(LeetCode)

# Install: Move all executable to ./bin
set(INSTALL_DIR "${CMAKE_CURRENT_LIST_DIR}/bin")

option(Q "Input the problem number to build (0 to build all)" 0)    # used in ./problems/CMakeLists.txt
option(T "Enable testing or not" ON)

enable_testing()

if (T)
    message(STATUS "Testing is enabled.")
    include(CheckCXXCompilerFlag)
    CHECK_CXX_COMPILER_FLAG("-std=c++14" CXX14)
    if(CXX14)   # support c++14
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    else(CXX14)
        message(FATAL_ERROR "Your compiler does not support C++14 standard. This is required if compile the test cases.")
    endif(CXX14)

    message(STATUS "Google Test has been set to link dynamically.")
    SET(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/googletest
                    ${CMAKE_CURRENT_SOURCE_DIR}/googletest/build
                    EXCLUDE_FROM_ALL)
endif(T)

include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(problems)

