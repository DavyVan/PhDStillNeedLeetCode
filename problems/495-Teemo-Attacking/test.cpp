#include "kernel.h"
#include <gtest/gtest.h>

TEST(_495, _1)
{
    auto expect = 4;
    vector<int> times = {1, 4};
    int duration = 2;

    Solution S;
    auto result = S.findPoisonedDuration(times, duration);

    EXPECT_TRUE(result == expect);
}

TEST(_495, _2)
{
    auto expect = 3;
    vector<int> times = {1, 2};
    int duration = 2;

    Solution S;
    auto result = S.findPoisonedDuration(times, duration);

    EXPECT_TRUE(result == expect);
}
