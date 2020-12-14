#include "kernel.h"
#include <gtest/gtest.h>

TEST(_283, _1)
{
    int size = 5;
    int nums[] = {0, 1, 0, 3, 12};
    int expect[] = {1, 3, 12, 0, 0};

    moveZeroes(nums, size);

    for (int i = 0; i < size; i++)
        EXPECT_EQ(nums[i], expect[i]);
}