#include "kernel.h"
#include <gtest/gtest.h>

TEST(_112, _1)
{
    int size = 13;
    int sum = 22;
    int nodes[] = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, 1};
    bool expect = true;

    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(Solution::hasPathSum(root, sum), expect);
}

TEST(_112, _2)
{
    int size = 13;
    int sum = 22;
    int nodes[] = {5, 4, 8, 11, -1, 13, 4, 7, 3, -1, -1, -1, 1};
    bool expect = false;

    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(Solution::hasPathSum(root, sum), expect);
}

TEST(_112, empty)
{
    EXPECT_EQ(Solution::hasPathSum(nullptr, 0), false);
}