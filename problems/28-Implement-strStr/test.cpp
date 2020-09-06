#include "kernel.h"
#include <gtest/gtest.h>

TEST(_28, _hello)
{
    char haystack[] = "hello";
    char needle[] = "ll";
    int expect = 2;

    EXPECT_EQ(strStr(haystack, needle), expect);
}

TEST(_28, _aaaaa)
{
    char haystack[] = "aaaaa";
    char needle[] = "bba";
    int expect = -1;

    EXPECT_EQ(strStr(haystack, needle), expect);
}

TEST(_28, _empty)
{
    char haystack[] = "hello";
    char needle[] = "";
    int expect = 0;

    EXPECT_EQ(strStr(haystack, needle), expect);
}