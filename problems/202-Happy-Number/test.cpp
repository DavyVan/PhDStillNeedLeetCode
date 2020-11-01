#include "kernel.h"
#include <gtest/gtest.h>

TEST(_202, _19)
{
    int n = 19;
    bool expect = true;
    EXPECT_EQ(isHappy(n), expect);
}

TEST(_202, _negative)
{
    int n = -19;
    bool expect = false;
    EXPECT_EQ(isHappy(n), expect);
}

TEST(_202, _4)
{
    int n = 4;
    bool expect = false;
    EXPECT_EQ(isHappy(n), expect);
}