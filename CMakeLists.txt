cmake_minimum_required(VERSION 2.8.11)
project(LeetCode)

# Install: Move all executable to ./bin
set(INSTALL_DIR "${CMAKE_CURRENT_LIST_DIR}/bin")

option(Q "Input the problem number to build (0 to build all)" 0)    # used in ./problems/CMakeLists.txt
option(T "Enable testing or not" ON)

enable_testing()

if (T)
if(WIN32)
    message(STATUS "Google Test has been set to link dynamically.")
    SET(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif(WIN32)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/googletest
                 ${CMAKE_CURRENT_SOURCE_DIR}/googletest/build
                 EXCLUDE_FROM_ALL)
endif(T)

add_subdirectory(problems)

