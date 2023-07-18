#include "kernel.h"
#include <gtest/gtest.h>

TEST(_500, _1)
{
    auto expect = vector<string>({"Alaska","Dad"});
    vector<string> words = {"Hello","Alaska","Dad","Peace"};

    Solution S;
    auto result = S.findWords(words);

    EXPECT_TRUE(result == expect);
}

TEST(_500, _2)
{
    auto expect = vector<string>({});
    vector<string> words = {"omk"};

    Solution S;
    auto result = S.findWords(words);

    EXPECT_TRUE(result == expect);
}

TEST(_500, _3)
{
    auto expect = vector<string>({"adsdf","sfd"});
    vector<string> words = {"adsdf","sfd"};

    Solution S;
    auto result = S.findWords(words);

    EXPECT_TRUE(result == expect);
}