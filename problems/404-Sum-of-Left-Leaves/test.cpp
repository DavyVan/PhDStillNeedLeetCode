#include "kernel.h"
#include <gtest/gtest.h>
#include <vector>
using namespace std;

TEST(_404, _1)
{
    vector<int> nums{3, 9, 20, -1, -1, 15, 7};
    int expect = 24;

    BinaryTree bt;
    TreeNode *root = bt.construct_from_level_order_array(nums.data(), nums.size());
    EXPECT_EQ(Solution::sumOfLeftLeaves(root), expect);
}

TEST(_404, _2)
{
    vector<int> nums{3};
    int expect = 0;

    BinaryTree bt;
    TreeNode *root = bt.construct_from_level_order_array(nums.data(), nums.size());
    EXPECT_EQ(Solution::sumOfLeftLeaves(root), expect);
}

TEST(_404, _3)
{
    int expect = 0;

    BinaryTree bt;
    EXPECT_EQ(Solution::sumOfLeftLeaves(nullptr), expect);
}