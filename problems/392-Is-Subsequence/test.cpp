#include "kernel.h"
#include <gtest/gtest.h>

TEST(_392, _1)
{
    char *s = "abc";
    char *t = "ahbgdc";
    bool expect = true;

    EXPECT_EQ(isSubsequence(s, t), expect);
}

TEST(_392, _2)
{
    char *s = "axc";
    char *t = "ahbgdc";
    bool expect = false;

    EXPECT_EQ(isSubsequence(s, t), expect);
}

TEST(_392, empty)
{
    char *s = "";
    char *t = "";
    bool expect = true;

    EXPECT_EQ(isSubsequence(s, t), expect);
}