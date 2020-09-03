cmake_minimum_required(VERSION 3.10)
project(LeetCode)

# Install: Move all executable to ./bin
set(INSTALL_DIR "${CMAKE_CURRENT_LIST_DIR}/bin")

option(Q "Input the problem number to build (0 to build all)" 0)    # used in ./problems/CMakeLists.txt
option(T "Enable testing or not" ON)

enable_testing()

if (T)
    message(STATUS "Testing is enabled.")
    if(WIN32)   # Need to force googletest link dynamically
        message(STATUS "Google Test has been set to link dynamically.")
        SET(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    else(WIN32) # if Linux, check C++11
        include(CheckCXXCompilerFlag)
        CHECK_CXX_COMPILER_FLAG("-std=c++11" CXX11)
        if(CXX11)   # support c++11
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
        else(CXX11)
            message(FATAL_ERROR "Your compiler does not support C++11 standard. This is required if compile the test cases.")
        endif(CXX11)
    endif(WIN32)

    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/googletest
                    ${CMAKE_CURRENT_SOURCE_DIR}/googletest/build
                    EXCLUDE_FROM_ALL)
endif(T)

add_subdirectory(problems)

