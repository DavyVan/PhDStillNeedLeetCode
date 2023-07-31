#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_72, _1)
{
    auto expect = 3;
    string word1 = "horse";
    string word2 = "ros";

    Solution S;
    auto result = S.minDistance(word1, word2);

    EXPECT_TRUE(result == expect);
}

TEST(_72, _2)
{
    auto expect = 5;
    string word1 = "intention";
    string word2 = "execution";

    Solution S;
    auto result = S.minDistance(word1, word2);

    EXPECT_TRUE(result == expect);
}

TEST(_72, _3)
{
    auto expect = 6;
    string word1 = "dinitrophenylhydrazine";
    string word2 = "acetylphenylhydrazine";

    Solution S;
    auto result = S.minDistance(word1, word2);

    EXPECT_TRUE(result == expect);
}

TEST(_72, _4)
{
    auto expect = 27;
    string word1 = "pneumonoultramicroscopicsilicovolcanoconiosis";
    string word2 = "ultramicroscopically";

    Solution S;
    auto result = S.minDistance(word1, word2);

    EXPECT_TRUE(result == expect);
}

TEST(_72, _5)
{
    auto expect = 1;
    string word1 = "";
    string word2 = "a";

    Solution S;
    auto result = S.minDistance(word1, word2);

    EXPECT_TRUE(result == expect);
}