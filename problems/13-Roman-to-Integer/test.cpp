#include "kernel.h"
#include <gtest/gtest.h>

TEST(_13, _III)
{
    char *in = "III";
    EXPECT_EQ(romanToInt(in), 3);
}

TEST(_13, _IV)
{
    char *in = "IV";
    EXPECT_EQ(romanToInt(in), 4);
}

TEST(_13, _IX)
{
    char *in = "IX";
    EXPECT_EQ(romanToInt(in), 9);
}

TEST(_13, _LVIII)
{
    char *in = "LVIII";
    EXPECT_EQ(romanToInt(in), 58);
}

TEST(_13, _MCMXCIV)
{
    char *in = "MCMXCIV";
    EXPECT_EQ(romanToInt(in), 1994);
}