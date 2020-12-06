#include "kernel.h"
#include <gtest/gtest.h>

TEST(_268, _1)
{
    int size = 3;
    int nums[] = {3, 0, 1};
    int expect = 2;
    EXPECT_EQ(missingNumber(nums, size), expect);
}

TEST(_268, _2)
{
    int size = 2;
    int nums[] = {0, 1};
    int expect = 2;
    EXPECT_EQ(missingNumber(nums, size), expect);
}

TEST(_268, _3)
{
    int size = 9;
    int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int expect = 8;
    EXPECT_EQ(missingNumber(nums, size), expect);
}

TEST(_268, _4)
{
    int size = 1;
    int nums[] = {0};
    int expect = 1;
    EXPECT_EQ(missingNumber(nums, size), expect);
}