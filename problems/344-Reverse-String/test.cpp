#include "kernel.h"
#include <gtest/gtest.h>

TEST(_344, _1)
{
    char s[] = "hello";
    int s_len = 5;
    char expect[] = "olleh";
    reverseString(s, s_len);
    EXPECT_STREQ(s, expect);
}

TEST(_344, _2)
{
    char s[] = "Hannah";
    int s_len = 6;
    char expect[] = "hannaH";
    reverseString(s, s_len);
    EXPECT_STREQ(s, expect);
}