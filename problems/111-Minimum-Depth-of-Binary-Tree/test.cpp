#include "kernel.h"
#include <gtest/gtest.h>

TEST(_111, _1)
{
    int size = 7;
    int nodes[] = {3, 9, 20, -1, -1, 15, 7};
    int expect = 2;
    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(Solution::minDepth(root), expect);
}

TEST(_111, empty)
{
    int expect = 0;

    EXPECT_EQ(Solution::minDepth(nullptr), expect);
}