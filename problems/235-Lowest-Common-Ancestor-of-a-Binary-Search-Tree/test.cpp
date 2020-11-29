#include "kernel.h"
#include <vector>
#include <gtest/gtest.h>
using namespace std;

TEST(_235, _1)
{
    vector<int> nums{6, 2, 8, 0, 4, 7, 9, -1, -1, 3, 5};
    TreeNode p{2, nullptr, nullptr};
    TreeNode q{8, nullptr, nullptr};
    int expect = 6;

    BinaryTree bt;
    TreeNode* root = bt.construct_from_level_order_array(nums.data(), nums.size());
    TreeNode* ret = lowestCommonAncestor(root, &p, &q);
    EXPECT_EQ(ret->val, expect);
}

TEST(_235, _2)
{
    vector<int> nums{6, 2, 8, 0, 4, 7, 9, -1, -1, 3, 5};
    TreeNode p{2, nullptr, nullptr};
    TreeNode q{4, nullptr, nullptr};
    int expect = 2;

    BinaryTree bt;
    TreeNode* root = bt.construct_from_level_order_array(nums.data(), nums.size());
    TreeNode* ret = lowestCommonAncestor(root, &p, &q);
    EXPECT_EQ(ret->val, expect);
}

TEST(_235, _3)
{
    vector<int> nums{2, 1};
    TreeNode p{2, nullptr, nullptr};
    TreeNode q{1, nullptr, nullptr};
    int expect = 2;

    BinaryTree bt;
    TreeNode* root = bt.construct_from_level_order_array(nums.data(), nums.size());
    TreeNode* ret = lowestCommonAncestor(root, &p, &q);
    EXPECT_EQ(ret->val, expect);
}