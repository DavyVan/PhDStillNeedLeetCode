#include "kernel.h"
#include <gtest/gtest.h>

TEST(_100, _1)
{
    // Construct binary tree
    // p
    struct TreeNode p = {1, NULL, NULL};
    struct TreeNode p_l1 = {2, NULL, NULL};
    struct TreeNode p_r1 = {3, NULL, NULL};
    p.left = &p_l1;
    p.right = &p_r1;
    // q
    struct TreeNode q = {1, NULL, NULL};
    struct TreeNode q_l1 = {2, NULL, NULL};
    struct TreeNode q_r1 = {3, NULL, NULL};
    q.left = &q_l1;
    q.right = &q_r1;

    EXPECT_EQ(isSameTree(&p, &q), true);
}

TEST(_100, _2)
{
    // Construct binary tree
    // p
    struct TreeNode p = {1, NULL, NULL};
    struct TreeNode p_l1 = {2, NULL, NULL};
    // struct TreeNode p_r1 = {3, NULL, NULL};
    p.left = &p_l1;
    // p.right = &p_r1;
    // q
    struct TreeNode q = {1, NULL, NULL};
    // struct TreeNode q_l1 = {2, NULL, NULL};
    struct TreeNode q_r1 = {2, NULL, NULL};
    // q.left = &q_l1;
    q.right = &q_r1;

    EXPECT_EQ(isSameTree(&p, &q), false);
}

TEST(_100, _3)
{
    // Construct binary tree
    // p
    struct TreeNode p = {1, NULL, NULL};
    struct TreeNode p_l1 = {2, NULL, NULL};
    struct TreeNode p_r1 = {1, NULL, NULL};
    p.left = &p_l1;
    p.right = &p_r1;
    // q
    struct TreeNode q = {1, NULL, NULL};
    struct TreeNode q_l1 = {1, NULL, NULL};
    struct TreeNode q_r1 = {2, NULL, NULL};
    q.left = &q_l1;
    q.right = &q_r1;

    EXPECT_EQ(isSameTree(&p, &q), false);
}