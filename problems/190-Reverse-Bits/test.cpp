#include "kernel.h"
#include <gtest/gtest.h>

TEST(_190, _43261596)
{
    uint32_t in = 43261596;
    uint32_t expect = 964176192;
    EXPECT_EQ(reverseBits(in), expect);
}

TEST(_190, _4294967293)
{
    uint32_t in = 4294967293;
    uint32_t expect = 3221225471;
    EXPECT_EQ(reverseBits(in), expect);
}

TEST(_190, _0)
{
    uint32_t in = 0;
    uint32_t expect = 0;
    EXPECT_EQ(reverseBits(in), expect);
}