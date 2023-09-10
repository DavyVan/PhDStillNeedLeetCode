#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_589, _1)
{
    auto expect = vector<int>({1,3,5,6,2,4});
    string root = "8 1 -1 3 2 4 -1 5 6";
    stringstream ssRoot(root);

    Solution S;
    auto result = S.preorder(NaryTree::input_and_construct("", ssRoot)->root);
    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_589, _2)
{
    auto expect = vector<int>({1,2,3,6,7,11,14,4,8,12,5,9,13,10});
    string root = "25 1 -1 2 3 4 5 -1 -1 6 7 -1 8 -1 9 10 -1 -1 11 -1 12 -1 13 -1 -1 14";
    stringstream ssRoot(root);

    Solution S;
    auto result = S.preorder(NaryTree::input_and_construct("", ssRoot)->root);
    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_589, _3)
{
    auto expect = vector<int>({});
    string root = "0";
    stringstream ssRoot(root);

    Solution S;
    auto result = S.preorder(NaryTree::input_and_construct("", ssRoot)->root);
    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}
