#include "kernel.h"
#include <gtest/gtest.h>

TEST(_217, _1)
{
    vector<int> nums{1, 2, 3, 2};
    bool expect = true;
    Solution sln;
    EXPECT_EQ(sln.containsDuplicate(nums), expect);
}

TEST(_217, _2)
{
    vector<int> nums{1, 2, 3, 4};
    bool expect = false;
    Solution sln;
    EXPECT_EQ(sln.containsDuplicate(nums), expect);
}

TEST(_217, _3)
{
    vector<int> nums{1,1,1,3,3,4,3,2,4,2};
    bool expect = true;
    Solution sln;
    EXPECT_EQ(sln.containsDuplicate(nums), expect);
}

TEST(_217, _4)
{
    vector<int> nums(0);
    bool expect = false;
    Solution sln;
    EXPECT_EQ(sln.containsDuplicate(nums), expect);
}