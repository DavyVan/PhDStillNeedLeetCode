# PhDStillNeedLeetCode

Finally...it's my turn...

Anwsers to LeetCode. Also a practice of CMake and Google Test.  
Please see `./problems` for full list of solved problems.

# How to Build

## Prerequisites
* CMake 2.6 or later
* Any C compiler

## Build Steps

To build all problems along with test cases:
```
mkdir build && cd build
cmake .. && cmake --build . --target install
```
Then all binary files will go to `./bin`  

To build a designated problem:
```
mkdir build && cd build
cmake -DQ=<problem number on LeetCode> .. && cmake --build . --target install
```
Then only one binary file will go to `./bin`  