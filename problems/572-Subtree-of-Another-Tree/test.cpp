#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_572, _1)
{
    auto expect = true;
    string root = "5 3 4 5 1 2";
    string subroot = "3 4 1 2";
    stringstream ssRoot(root);
    stringstream ssSubRoot(subroot);

    Solution S;
    auto result = S.isSubtree(BinaryTree::input_and_construct("", ssRoot)->root, BinaryTree::input_and_construct("", ssSubRoot)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_572, _2)
{
    auto expect = false;
    string root = "10 3 4 5 1 2 -1 -1 -1 -1 0";
    string subroot = "3 4 1 2";
    stringstream ssRoot(root);
    stringstream ssSubRoot(subroot);

    Solution S;
    auto result = S.isSubtree(BinaryTree::input_and_construct("", ssRoot)->root, BinaryTree::input_and_construct("", ssSubRoot)->root);
    EXPECT_TRUE(result == expect);
}

TEST(_572, _3)
{
    auto expect = false;
    string root = "6 3 4 5 1 2 -1 2";
    string subroot = "3 3 1 2";
    stringstream ssRoot(root);
    stringstream ssSubRoot(subroot);

    Solution S;
    auto result = S.isSubtree(BinaryTree::input_and_construct("", ssRoot)->root, BinaryTree::input_and_construct("", ssSubRoot)->root);
    EXPECT_TRUE(result == expect);
}
