#include "kernel.h"
#include <gtest/gtest.h>

TEST(_110, _1)
{
    int size = 7;
    int nodes[] = {3, 9, 20, -1, -1, 15, 7};
    bool expect = true;
    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(isBalanced(root), expect);
}

TEST(_110, _2)
{
    int size = 9;
    int nodes[] = {1, 2, 2, 3, 3, -1, -1, 4, 4};
    bool expect = false;
    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(isBalanced(root), expect);
}