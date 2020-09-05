#include "kernel.h"
#include <gtest/gtest.h>
#include <stdlib.h>

TEST(_27, _4elements)
{
    int size = 4;
    int val = 3;
    int nums[] = {3, 2, 2, 3};
    int ret[] = {2, 2}; // must be in order, even though this is not a requirement in the problem description.
    int ret_size = 2;

    EXPECT_EQ(removeElement(nums, size, val), ret_size);
    for (int i = 0; i < ret_size; i++)
    {
        EXPECT_EQ(nums[i], ret[i]);
    }
}

TEST(_27, _8elements)
{
    int size = 8;
    int val = 2;
    int nums[] = {0,1,2,2,3,0,4,2};
    int ret[] = {0, 1, 3, 0, 4}; // must be in order, even though this is not a requirement in the problem description.
    int ret_size = 5;

    EXPECT_EQ(removeElement(nums, size, val), ret_size);
    for (int i = 0; i < ret_size; i++)
    {
        EXPECT_EQ(nums[i], ret[i]);
    }
}