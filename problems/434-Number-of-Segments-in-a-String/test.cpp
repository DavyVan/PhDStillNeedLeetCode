#include "kernel.h"
#include <gtest/gtest.h>

TEST(_434, _1)
{
    int expect = 5;
    string input = "Hello, my name is John";

    Solution s;
    int result = s.countSegments(input);

    EXPECT_EQ(result, expect);
}

TEST(_434, _2)
{
    int expect = 1;
    string input = "Hello";

    Solution s;
    int result = s.countSegments(input);

    EXPECT_EQ(result, expect);
}

TEST(_434, _3)
{
    int expect = 0;
    string input = "";

    Solution s;
    int result = s.countSegments(input);

    EXPECT_EQ(result, expect);
}

TEST(_434, _4)
{
    int expect = 0;
    string input = "        ";

    Solution s;
    int result = s.countSegments(input);

    EXPECT_EQ(result, expect);
}