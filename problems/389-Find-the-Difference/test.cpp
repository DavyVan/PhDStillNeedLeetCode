#include "kernel.h"
#include <gtest/gtest.h>

TEST(_389, _1)
{
    char *s = "abcd";
    char *t = "abcde";
    char expect = 'e';

    EXPECT_EQ(findTheDifference(s, t), expect);
}

TEST(_389, _2)
{
    char *s = "";
    char *t = "y";
    char expect = 'y';

    EXPECT_EQ(findTheDifference(s, t), expect);
}

TEST(_389, _3)
{
    char *s = "a";
    char *t = "aa";
    char expect = 'a';

    EXPECT_EQ(findTheDifference(s, t), expect);
}

TEST(_389, _4)
{
    char *s = "ae";
    char *t = "aea";
    char expect = 'a';

    EXPECT_EQ(findTheDifference(s, t), expect);
}