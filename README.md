# PhDStillNeedLeetCode [![Build Status](https://travis-ci.com/DavyVan/PhDStillNeedLeetCode.svg?branch=master)](https://travis-ci.com/DavyVan/PhDStillNeedLeetCode)

Finally...it's my turn...

Anwsers to LeetCode. Also a practice of CMake and Google Test.  
Please see `./problems` for full list of solved problems.

# How to Build

## Prerequisites
* CMake 3.10 or later
* C++ compiler supports C++11

## Build Steps

To build all problems along with test cases:
```
mkdir build && cd build
cmake .. && cmake --build . --target install
ctest -C debug      # Run all the test cases
```
Then all binary files will go to `./bin`  
To build without test cases, add `-DT=OFF` to `cmake` command.

To build a designated problem:
```
mkdir build && cd build
cmake -DQ=<problem number on LeetCode> .. && cmake --build . --target install
```
Then only one binary file will go to `./bin`  