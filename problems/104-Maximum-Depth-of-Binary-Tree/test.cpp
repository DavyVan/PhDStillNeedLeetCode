#include "kernel.h"
#include <gtest/gtest.h>

TEST(_104, _1)
{
    int size = 7;
    int nodes[] = {3, 9, 20, -1, -1, 15, 7};
    int expect = 3;
    EXPECT_EQ(Solution::maxDepth(BinaryTree().construct_from_level_order_array(nodes, size)), expect);
}

TEST(_104, empty)
{
    int size = 0;
    int *nodes = nullptr;
    int expect = 0;
    EXPECT_EQ(Solution::maxDepth(nullptr), expect);
}