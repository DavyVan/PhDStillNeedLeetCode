#include "kernel.h"
#include <gtest/gtest.h>

TEST(_506, _1)
{
    auto expect = vector<string>({"Gold Medal","Silver Medal","Bronze Medal","4","5"});
    vector<int> score = {5,4,3,2,1};

    Solution S;
    auto result = S.findRelativeRanks(score);

    EXPECT_TRUE(result == expect);
}

TEST(_506, _2)
{
    auto expect = vector<string>({"Gold Medal","5","Bronze Medal","Silver Medal","4"});
    vector<int> score = {10,3,8,9,4};

    Solution S;
    auto result = S.findRelativeRanks(score);

    EXPECT_TRUE(result == expect);
}
