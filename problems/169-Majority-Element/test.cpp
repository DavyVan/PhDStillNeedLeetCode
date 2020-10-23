#include "kernel.h"
#include <gtest/gtest.h>

TEST(_169, _1)
{
    int size = 3;
    int nums[] = {3, 2, 3};
    int expect = 3;
    EXPECT_EQ(majorityElement(nums, size), expect);
}

TEST(_169, _2)
{
    int size = 7;
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int expect = 2;
    EXPECT_EQ(majorityElement(nums, size), expect);
}