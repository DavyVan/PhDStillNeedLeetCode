#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_551, _1)
{
    auto expect = true;
    string s = "PPALLP";

    Solution S;
    auto result = S.checkRecord(s);
    EXPECT_TRUE(result == expect);
}

TEST(_551, _2)
{
    auto expect = false;
    string s = "PPALLL";

    Solution S;
    auto result = S.checkRecord(s);
    EXPECT_TRUE(result == expect);
}
