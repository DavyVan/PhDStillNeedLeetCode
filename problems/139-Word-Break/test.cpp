#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_139, _1)
{
    auto expect = true;
    string s = "leetcode";
    vector<string> dict = {"leet", "code"};

    Solution S;
    auto result = S.wordBreak(s, dict);

    EXPECT_TRUE(result == expect);
}

TEST(_139, _2)
{
    auto expect = true;
    string s = "applepenapple";
    vector<string> dict = {"apple", "pen"};

    Solution S;
    auto result = S.wordBreak(s, dict);

    EXPECT_TRUE(result == expect);
}

TEST(_139, _3)
{
    auto expect = false;
    string s = "catsandog";
    vector<string> dict = {"cats", "dog", "sand", "and", "cat"};

    Solution S;
    auto result = S.wordBreak(s, dict);

    EXPECT_TRUE(result == expect);
}

TEST(_139, _4)
{
    auto expect = true;
    string s = "a";
    vector<string> dict = {"a"};

    Solution S;
    auto result = S.wordBreak(s, dict);

    EXPECT_TRUE(result == expect);
}