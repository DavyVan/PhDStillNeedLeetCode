#include "kernel.h"
#include <gtest/gtest.h>

TEST(_405, _1)
{
    string expect = "0";

    Solution s;
    string result = s.toHex(0);

    EXPECT_TRUE(result == expect);
}

TEST(_405, _2)
{
    string expect = "1a";

    Solution s;
    string result = s.toHex(26);

    EXPECT_TRUE(result == expect);
}

TEST(_405, _3)
{
    string expect = "ffffffff";

    Solution s;
    string result = s.toHex(-1);

    EXPECT_TRUE(result == expect);
}