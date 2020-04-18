cmake_minimum_required(VERSION 2.6)
project(LeetCode)

# Install: Move all executable to ./bin
set(INSTALL_DIR "${CMAKE_CURRENT_LIST_DIR}/bin")

option(Q "Input the problem number to build (0 to build all)" 0)    # used in ./problems/CMakeLists.txt

add_subdirectory(problems)

