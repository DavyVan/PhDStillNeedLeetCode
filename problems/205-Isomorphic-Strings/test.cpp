#include "kernel.h"
#include <gtest/gtest.h>

TEST(_205, add_egg)
{
    char *s = "add";
    char *t = "egg";
    bool expect = true;
    EXPECT_EQ(isIsomorphic(s, t), expect);
}

TEST(_205, foo_bar)
{
    char *s = "foo";
    char *t = "bar";
    bool expect = false;
    EXPECT_EQ(isIsomorphic(s, t), expect);
}

TEST(_205, paper_title)
{
    char *s = "paper";
    char *t = "title";
    bool expect = true;
    EXPECT_EQ(isIsomorphic(s, t), expect);
}

TEST(_205, 13_42)
{
    char *s = "13";
    char *t = "42";
    bool expect = true;
    EXPECT_EQ(isIsomorphic(s, t), expect);
}