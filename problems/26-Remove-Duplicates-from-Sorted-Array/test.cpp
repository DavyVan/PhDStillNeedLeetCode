#include "kernel.h"
#include <gtest/gtest.h>

TEST(_26, _3)
{
    int size = 3;
    int nums[] = {1, 1, 2};
    int expect_size = 2;
    int expect_nums[] = {1, 2};

    int ret = removeDuplicates(nums, size);

    EXPECT_EQ(ret, expect_size);
    for (int i = 0; i < ret; i++)
        EXPECT_EQ(nums[i], expect_nums[i]);
}

TEST(_26, _10)
{
    int size = 10;
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int expect_size = 5;
    int expect_nums[] = {0, 1, 2, 3, 4};

    int ret = removeDuplicates(nums, size);

    EXPECT_EQ(ret, expect_size);
    for (int i = 0; i < ret; i++)
        EXPECT_EQ(nums[i], expect_nums[i]);
}