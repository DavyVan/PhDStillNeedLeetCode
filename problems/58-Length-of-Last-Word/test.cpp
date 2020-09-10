#include "kernel.h"
#include <gtest/gtest.h>

TEST(_58, helloworld)
{
    char *s = "Hello World";
    int expect = 5;

    EXPECT_EQ(lengthOfLastWord(s), expect);
}

TEST(_58, empty)
{
    char *s = "";
    int expect = 0;

    EXPECT_EQ(lengthOfLastWord(s), expect);
}

TEST(_58, onlyspace_one)
{
    char *s = " ";
    int expect = 0;

    EXPECT_EQ(lengthOfLastWord(s), expect);
}

TEST(_58, onlyspace_many)
{
    char *s = "         ";
    int expect = 0;

    EXPECT_EQ(lengthOfLastWord(s), expect);
}