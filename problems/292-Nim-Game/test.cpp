#include "kernel.h"
#include <gtest/gtest.h>

TEST(_292, _1)
{
    int n = 1;
    bool expect = true;
    EXPECT_EQ(canWinNim(n), expect);
}

TEST(_292, _2)
{
    int n = 2;
    bool expect = true;
    EXPECT_EQ(canWinNim(n), expect);
}

TEST(_292, _3)
{
    int n = 3;
    bool expect = true;
    EXPECT_EQ(canWinNim(n), expect);
}

TEST(_292, _4)
{
    int n = 4;
    bool expect = false;
    EXPECT_EQ(canWinNim(n), expect);
}
