#include "kernel.h"
#include <gtest/gtest.h>

TEST(_101, recursive_1)
{
    int size = 7;
    int nodes[] = {1, 2, 2, 3, 4, 4, 3};
    bool expect = true;

    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(isSymmetric_recursive(root), expect);
}

TEST(_101, recursive_2)
{
    int size = 7;
    int nodes[] = {1, 2, 2, -1, 3, -1, 3};
    bool expect = false;

    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(isSymmetric_recursive(root), expect);
}

TEST(_101, recursive_empty)
{
    int size = 0;
    int *nodes = NULL;
    bool expect = true;

    TreeNode *root = NULL;
    EXPECT_EQ(isSymmetric_recursive(root), expect);
}

TEST(_101, iterative_1)
{
    int size = 7;
    int nodes[] = {1, 2, 2, 3, 4, 4, 3};
    bool expect = true;

    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(isSymmetric_iterative(root), expect);
}

TEST(_101, iterative_2)
{
    int size = 7;
    int nodes[] = {1, 2, 2, -1, 3, -1, 3};
    bool expect = false;

    BinaryTree tree;
    TreeNode *root = tree.construct_from_level_order_array(nodes, size);
    EXPECT_EQ(isSymmetric_iterative(root), expect);
}

TEST(_101, iterative_empty)
{
    int size = 0;
    int *nodes = NULL;
    bool expect = true;

    TreeNode *root = NULL;
    EXPECT_EQ(isSymmetric_iterative(root), expect);
}