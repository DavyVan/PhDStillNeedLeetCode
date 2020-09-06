#include "kernel.h"
#include <gtest/gtest.h>

TEST(_35, _found)
{
    int size = 4;
    int target = 5;
    int nums[] = {1, 3, 5, 6};
    int ret = 2;

    EXPECT_EQ(searchInsert(nums, size, target), ret);
}

TEST(_35, _insert_mid)
{
    int size = 4;
    int target = 2;
    int nums[] = {1, 3, 5, 6};
    int ret = 1;

    EXPECT_EQ(searchInsert(nums, size, target), ret);
}

TEST(_35, _insert_tail)
{
    int size = 4;
    int target = 7;
    int nums[] = {1, 3, 5, 6};
    int ret = 4;

    EXPECT_EQ(searchInsert(nums, size, target), ret);
}

TEST(_35, _insert_head)
{
    int size = 4;
    int target = 0;
    int nums[] = {1, 3, 5, 6};
    int ret = 0;

    EXPECT_EQ(searchInsert(nums, size, target), ret);
}