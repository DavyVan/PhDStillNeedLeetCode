#include "kernel.h"
#include <gtest/gtest.h>
#include <stdlib.h>

TEST(_20, _1)
{
    char *in = "()";
    EXPECT_EQ(isValid(in), true);
}

TEST(_20, _2)
{
    char *in = "()[]{}";
    EXPECT_EQ(isValid(in), true);
}

TEST(_20, _3)
{
    char *in = "(]";
    EXPECT_EQ(isValid(in), false);
}

TEST(_20, _4)
{
    char *in = "([)]";
    EXPECT_EQ(isValid(in), false);
}

TEST(_20, _5)
{
    char *in = "{[]}";
    EXPECT_EQ(isValid(in), true);
}