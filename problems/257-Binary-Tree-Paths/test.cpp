#include "kernel.h"
#include <gtest/gtest.h>

TEST(_257, _1)
{
    vector<int> nums{1, 2, 3, -1, 5};
    vector<string> expect{"1->2->5", "1->3"};

    BinaryTree bt;
    TreeNode* root = bt.construct_from_level_order_array(nums.data(), nums.size());
    vector<string> ret = Solution::binaryTreePaths(root);

    ASSERT_EQ(ret.size(), expect.size());
    for (int i = 0; i < ret.size(); i++)
        EXPECT_EQ(ret[i], expect[i]);
}

TEST(_257, empty)
{
    vector<string> ret = Solution::binaryTreePaths(nullptr);
    EXPECT_EQ(ret.size(), 0);
}