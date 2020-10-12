#include "kernel.h"
#include <gtest/gtest.h>

TEST(_136, _1)
{
    int size = 3;
    int nums[] = {2, 2, 1};
    int expect = 1;
    EXPECT_EQ(singleNumber(nums, size), expect);
}

TEST(_136, _2)
{
    int size = 5;
    int nums[] = {4, 1, 2, 1, 2};
    int expect = 4;
    EXPECT_EQ(singleNumber(nums, size), expect);
}

TEST(_136, _3)
{
    int size = 1;
    int nums[] = {1};
    int expect = 1;
    EXPECT_EQ(singleNumber(nums, size), expect);
}