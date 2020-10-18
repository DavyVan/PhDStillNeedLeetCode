#include "kernel.h"
#include <gtest/gtest.h>

TEST(_167, _1)
{
    int size = 4;
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int expect[] = {1, 2};

    int ret_size;
    int *ret = twoSum(nums, size, target, &ret_size);
    
    EXPECT_EQ(ret[0], expect[0]);
    EXPECT_EQ(ret[1], expect[1]);

    free(ret);
}

TEST(_167, _2)
{
    int size = 3;
    int nums[] = {2, 3, 4};
    int target = 6;
    int expect[] = {1, 3};

    int ret_size;
    int *ret = twoSum(nums, size, target, &ret_size);
    
    EXPECT_EQ(ret[0], expect[0]);
    EXPECT_EQ(ret[1], expect[1]);

    free(ret);
}

TEST(_167, _3)
{
    int size = 2;
    int nums[] = {-1, 0};
    int target = -1;
    int expect[] = {1, 2};

    int ret_size;
    int *ret = twoSum(nums, size, target, &ret_size);
    
    EXPECT_EQ(ret[0], expect[0]);
    EXPECT_EQ(ret[1], expect[1]);

    free(ret);
}