#include "kernel.h"
#include <gtest/gtest.h>

TEST(_387, leetcode)
{
    char *s = "leetcode";
    int expect = 0;
    EXPECT_EQ(firstUniqChar(s), expect);
}

TEST(_387, loveleetcode)
{
    char *s = "loveleetcode";
    int expect = 2;
    EXPECT_EQ(firstUniqChar(s), expect);
}

TEST(_387, empty)
{
    char *s = "";
    int expect = -1;
    EXPECT_EQ(firstUniqChar(s), expect);
}