#include "kernel.h"
#include <gtest/gtest.h>

TEST(_145, _1)
{
    vector<int> expect = {3, 2, 1};

    // Construct binary tree
    TreeNode c(3, nullptr, nullptr);
    TreeNode b(2, &c, nullptr);
    TreeNode a(1, nullptr, &b);

    Solution s;
    vector<int> result = s.postorderTraversal(&a);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++)
    {
        EXPECT_EQ(result[i], expect[i]);
    }
}

TEST(_145, _2)
{
    vector<int> expect(0);

    Solution s;
    vector<int> result = s.postorderTraversal(nullptr);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++)
    {
        EXPECT_EQ(result[i], expect[i]);
    }
}

TEST(_145, _3)
{
    vector<int> expect = {1};

    // Construct binary tree
    TreeNode a(1, nullptr, nullptr);

    Solution s;
    vector<int> result = s.postorderTraversal(&a);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++)
    {
        EXPECT_EQ(result[i], expect[i]);
    }
}