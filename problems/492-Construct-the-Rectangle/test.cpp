#include "kernel.h"
#include <gtest/gtest.h>

TEST(_492, _1)
{
    auto expect = vector<int>({2, 2});
    int area = 4;

    Solution S;
    auto result = S.constructRectangle(area);

    EXPECT_TRUE(result == expect);
}

TEST(_492, _2)
{
    auto expect = vector<int>({37, 1});
    int area = 37;

    Solution S;
    auto result = S.constructRectangle(area);

    EXPECT_TRUE(result == expect);
}

TEST(_492, _3)
{
    auto expect = vector<int>({427, 286});
    int area = 122122;

    Solution S;
    auto result = S.constructRectangle(area);

    EXPECT_TRUE(result == expect);
}

TEST(_492, _4)
{
    auto expect = vector<int>({2, 1});
    int area = 2;

    Solution S;
    auto result = S.constructRectangle(area);

    EXPECT_TRUE(result == expect);
}
