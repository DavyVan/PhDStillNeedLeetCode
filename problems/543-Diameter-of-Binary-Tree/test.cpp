#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_543, _1)
{
    auto expect = 3;
    string bst = "5 1 2 3 4 5";
    stringstream ss(bst);

    Solution S;
    auto result = S.diameterOfBinaryTree(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_543, _2)
{
    auto expect = 1;
    string bst = "2 1 2";
    stringstream ss(bst);

    Solution S;
    auto result = S.diameterOfBinaryTree(BinaryTree::input_and_construct("", ss)->root);
    EXPECT_TRUE(result == expect);
}
