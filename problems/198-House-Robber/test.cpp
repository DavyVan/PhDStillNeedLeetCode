#include "kernel.h"
#include <gtest/gtest.h>

TEST(_198, _1)
{
    int size = 4;
    int nums[] = {1, 2, 3, 1};
    int expect = 4;
    EXPECT_EQ(rob(nums, size), expect);
}

TEST(_198, _2)
{
    int size = 5;
    int nums[] = {2, 7, 9, 3, 1};
    int expect = 12;
    EXPECT_EQ(rob(nums, size), expect);
}

TEST(_198, _empty)
{
    int size = 0;
    int *nums = NULL;
    int expect = 0;
    EXPECT_EQ(rob(nums, size), expect);
}