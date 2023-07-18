#include "kernel.h"
#include <gtest/gtest.h>

TEST(_501, _1)
{
    auto expect = vector<int>({2});
    string bst = "4 1 -1 2 2";
    std::stringstream bst_ss(bst);

    Solution S;
    auto result = S.findMode(BinaryTree::input_and_construct("", bst_ss)->root);

    EXPECT_TRUE(result == expect);
}

TEST(_501, _2)
{
    auto expect = vector<int>({0});
    string bst = "1 0";
    std::stringstream bst_ss(bst);

    Solution S;
    auto result = S.findMode(BinaryTree::input_and_construct("", bst_ss)->root);

    EXPECT_TRUE(result == expect);
}

TEST(_501, _3)
{
    auto expect = vector<int>({1});
    string bst = "3 1 1 2";
    std::stringstream bst_ss(bst);

    Solution S;
    auto result = S.findMode(BinaryTree::input_and_construct("", bst_ss)->root);

    EXPECT_TRUE(result == expect);
}

TEST(_501, _4)
{
    auto expect = vector<int>({6, 2});
    string bst = "11 6 2 8 0 4 7 9 -1 -1 2 6";
    std::stringstream bst_ss(bst);

    Solution S;
    auto result = S.findMode(BinaryTree::input_and_construct("", bst_ss)->root);

    EXPECT_TRUE(result == expect);
}