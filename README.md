# 1. PhDStillNeedLeetCode

Finally...it's my turn...

Anwsers to LeetCode. Also a practice of CMake and Google Test.  
Please see `./problems` for full list of solved problems.

**NOTE:** For all the problems that committed after the commit [`b8ec172`](https://github.com/DavyVan/PhDStillNeedLeetCode/commit/b8ec1721698bcdb4ffc605cb56955bd95f557a18) will be written in a more "C++" style instead of combining C and C++. For example, I will use more STL and containers. Also, there will be no more `kernel.cpp` for better code organization.

# 2. Build

## 2.1. Prerequisites
* CMake 3.25 or later
* C++ compiler supports C++14
* GoogleTest 1.11+

## 2.2. Build Steps

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

# 3. Run
Each problem has a main function with a infinite while-loop. You can just input data as prompted and input `EOF` when you finish to exit elegantly (of course `Ctrl-C` is also a good and fast way to terminate).

# 4. Reusable libs

## 4.1. `utils/binary_tree.h`

`binary_tree.h` includes binary tree node definition and tree construction functions take different format as input so that you do not need to define it by yourself and write test cases faster.

**How to input a binary tree?** The way to input a binary tree is almost identical to the way on LeetCode except that you need to use the integer `-1` instead of `null` to represent a empty tree node.