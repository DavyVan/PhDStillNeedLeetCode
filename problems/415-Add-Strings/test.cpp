#include "kernel.h"
#include <gtest/gtest.h>

TEST(_415, _1)
{
    string expect = "134";
    string input1 = "11";
    string input2 = "123";

    Solution s;
    string result = s.addStrings(input1, input2);

    EXPECT_TRUE(result == expect);
}

TEST(_415, _2)
{
    string expect = "533";
    string input1 = "456";
    string input2 = "77";

    Solution s;
    string result = s.addStrings(input1, input2);

    EXPECT_TRUE(result == expect);
}

TEST(_415, _3)
{
    string expect = "0";
    string input1 = "0";
    string input2 = "0";

    Solution s;
    string result = s.addStrings(input1, input2);

    EXPECT_TRUE(result == expect);
}

TEST(_415, _4)
{
    string expect = "10";
    string input1 = "1";
    string input2 = "9";

    Solution s;
    string result = s.addStrings(input1, input2);

    EXPECT_TRUE(result == expect);
}