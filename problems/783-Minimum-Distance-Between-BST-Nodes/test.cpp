#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_783, _1)
{
    auto expect = 1;
    string bst = "5 4 2 6 1 3";
    stringstream ss(bst);

    Solution S;
    auto result = S.minDiffInBST(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_783, _2)
{
    auto expect = 1;
    string bst = "7 1 0 48 -1 -1 12 49";
    stringstream ss(bst);

    Solution S;
    auto result = S.minDiffInBST(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}
