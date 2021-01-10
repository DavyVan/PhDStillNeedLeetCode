#include "kernel.h"
#include <gtest/gtest.h>

TEST(_383, _1)
{
    char *ransomNote = "a";
    char *magazine = "b";
    bool expect = false;
    EXPECT_EQ(canConstruct(ransomNote, magazine), expect);
}

TEST(_383, _2)
{
    char *ransomNote = "aa";
    char *magazine = "ab";
    bool expect = false;
    EXPECT_EQ(canConstruct(ransomNote, magazine), expect);
}

TEST(_383, _3)
{
    char *ransomNote = "aa";
    char *magazine = "aab";
    bool expect = true;
    EXPECT_EQ(canConstruct(ransomNote, magazine), expect);
}