#include "kernel.h"
#include <gtest/gtest.h>

TEST(_242, _1)
{
    char* s = "anagram";
    char* t = "nagaram";
    bool expect = true;
    EXPECT_EQ(isAnagram(s, t), expect);
}

TEST(_242, _2)
{
    char* s = "rat";
    char* t = "car";
    bool expect = false;
    EXPECT_EQ(isAnagram(s, t), expect);
}

TEST(_242, _3)
{
    char* s = "";
    char* t = "";
    bool expect = true;
    EXPECT_EQ(isAnagram(s, t), expect);
}