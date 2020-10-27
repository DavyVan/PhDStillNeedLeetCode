#include "kernel.h"
#include <gtest/gtest.h>

TEST(_191, _11)
{
    uint32_t n = 11;
    int expect = 3;
    EXPECT_EQ(hammingWeight(n), expect);
}

TEST(_191, _128)
{
    uint32_t n = 128;
    int expect = 1;
    EXPECT_EQ(hammingWeight(n), expect);
}

TEST(_191, _4294967293)
{
    uint32_t n = 4294967293;
    int expect = 31;
    EXPECT_EQ(hammingWeight(n), expect);
}

TEST(_191, _0)
{
    uint32_t n = 0;
    int expect = 0;
    EXPECT_EQ(hammingWeight(n), expect);
}