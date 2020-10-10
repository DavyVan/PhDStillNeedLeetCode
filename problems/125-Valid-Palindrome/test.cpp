#include "kernel.h"
#include <gtest/gtest.h>

TEST(_125, _1)
{
    char *in = "A man, a plan, a canal: Panama";
    bool expect = true;

    EXPECT_EQ(isPalindrome(in), expect);
}

TEST(_125, _2)
{
    char *in = "race a car";
    bool expect = false;

    EXPECT_EQ(isPalindrome(in), expect);
}

TEST(_125, _NULL)
{
    char *in = NULL;
    bool expect = false;

    EXPECT_EQ(isPalindrome(in), expect);
}

TEST(_125, _empty)
{
    char *in = "";
    bool expect = true;

    EXPECT_EQ(isPalindrome(in), expect);
}

TEST(_125, _space)
{
    char *in = " ";
    bool expect = true;

    EXPECT_EQ(isPalindrome(in), expect);
}

TEST(_125, _0P)
{
    char *in = "0P";
    bool expect = false;

    EXPECT_EQ(isPalindrome(in), expect);
}
