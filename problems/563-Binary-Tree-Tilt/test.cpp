#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_563, _1)
{
    auto expect = 1;
    string bst = "3 1 2 3";
    stringstream ss(bst);

    Solution S;
    auto result = S.findTilt(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_563, _2)
{
    auto expect = 15;
    string bst = "7 4 2 9 3 5 -1 7";
    stringstream ss(bst);

    Solution S;
    auto result = S.findTilt(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_563, _3)
{
    auto expect = 9;
    string bst = "9 21 7 14 1 1 2 2 3 3";
    stringstream ss(bst);

    Solution S;
    auto result = S.findTilt(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_563, _4)
{
    auto expect = 0;
    // string bst = "3 1 2 3";
    // stringstream ss(bst);

    Solution S;
    auto result = S.findTilt(nullptr);
    EXPECT_TRUE(result == expect);
}