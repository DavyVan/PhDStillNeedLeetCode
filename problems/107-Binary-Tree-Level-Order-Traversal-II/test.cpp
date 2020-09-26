#include "kernel.h"
#include <gtest/gtest.h>

TEST(_107, _1)
{
    int size = 7; 
    int nodes[] = {3, 9, 20, -1, -1, 15, 7};
    vector<vector<int>> expect{{15, 7}, {9, 20}, {3}};
    
    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    vector<vector<int>> ret = Solution::levelOrderBottom(root);

    int level = ret.size();
    for (int i = 0; i < level; i++)
    {
        int num = ret[i].size();
        for (int j = 0; j < num; j++)
            EXPECT_EQ(ret[i][j], expect[i][j]);
    }
}

TEST(_107, empty)
{
    vector<vector<int>> ret = Solution::levelOrderBottom(nullptr);
    EXPECT_EQ(ret.size(), 0);
}