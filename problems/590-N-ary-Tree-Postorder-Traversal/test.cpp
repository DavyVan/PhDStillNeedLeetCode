#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_590, _1)
{
    auto expect = vector<int>({5,6,3,2,4,1});
    string root = "8 1 -1 3 2 4 -1 5 6";
    stringstream ssRoot(root);

    Solution S;
    auto result = S.postorder(NaryTree::input_and_construct("", ssRoot)->root);
    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_590, _2)
{
    auto expect = vector<int>({2,6,14,11,7,3,12,8,4,13,9,10,5,1});
    string root = "25 1 -1 2 3 4 5 -1 -1 6 7 -1 8 -1 9 10 -1 -1 11 -1 12 -1 13 -1 -1 14";
    stringstream ssRoot(root);

    Solution S;
    auto result = S.postorder(NaryTree::input_and_construct("", ssRoot)->root);
    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}
