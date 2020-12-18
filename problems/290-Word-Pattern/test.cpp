#include "kernel.h"
#include <gtest/gtest.h>

TEST(_290, _1)
{
    string pattern = "abba";
    string s = "dog cat cat dog";
    bool expect = true;
    EXPECT_EQ(Solution::wordPattern(pattern, s), expect);
}

TEST(_290, _2)
{
    string pattern = "abba";
    string s = "dog cat cat fish";
    bool expect = false;
    EXPECT_EQ(Solution::wordPattern(pattern, s), expect);
}

TEST(_290, _3)
{
    string pattern = "aaaa";
    string s = "dog cat cat dog";
    bool expect = false;
    EXPECT_EQ(Solution::wordPattern(pattern, s), expect);
}

TEST(_290, _4)
{
    string pattern = "abba";
    string s = "dog dog dog dog";
    bool expect = false;
    EXPECT_EQ(Solution::wordPattern(pattern, s), expect);
}