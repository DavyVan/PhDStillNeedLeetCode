#include "kernel.h"
#include <gtest/gtest.h>

TEST(_231, _1)
{
    int n = 1;
    bool expect = true;
    EXPECT_EQ(isPowerOfTwo(n), expect);
}

TEST(_231, _16)
{
    int n = 16;
    bool expect = true;
    EXPECT_EQ(isPowerOfTwo(n), expect);
}

TEST(_231, _3)
{
    int n = 3;
    bool expect = false;
    EXPECT_EQ(isPowerOfTwo(n), expect);
}

TEST(_231, _4)
{
    int n = 4;
    bool expect = true;
    EXPECT_EQ(isPowerOfTwo(n), expect);
}

TEST(_231, _5)
{
    int n = 5;
    bool expect = false;
    EXPECT_EQ(isPowerOfTwo(n), expect);
}

TEST(_231, _1_intrinsic)
{
    int n = 1;
    bool expect = true;
    EXPECT_EQ(isPowerOfTwo_intrinsic(n), expect);
}

TEST(_231, _16_intrinsic)
{
    int n = 16;
    bool expect = true;
    EXPECT_EQ(isPowerOfTwo_intrinsic(n), expect);
}

TEST(_231, _3_intrinsic)
{
    int n = 3;
    bool expect = false;
    EXPECT_EQ(isPowerOfTwo_intrinsic(n), expect);
}

TEST(_231, _4_intrinsic)
{
    int n = 4;
    bool expect = true;
    EXPECT_EQ(isPowerOfTwo_intrinsic(n), expect);
}

TEST(_231, _5_intrinsic)
{
    int n = 5;
    bool expect = false;
    EXPECT_EQ(isPowerOfTwo_intrinsic(n), expect);
}