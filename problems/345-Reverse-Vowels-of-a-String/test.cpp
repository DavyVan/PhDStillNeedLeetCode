#include "kernel.h"
#include <gtest/gtest.h>

TEST(_345, hello)
{
    char s[] = "hello";
    char expect[] = "holle";
    EXPECT_STREQ(reverseVowels(s), expect);
}

TEST(_345, leetcode)
{
    char s[] = "leetcode";
    char expect[] = "leotcede";
    EXPECT_STREQ(reverseVowels(s), expect);
}