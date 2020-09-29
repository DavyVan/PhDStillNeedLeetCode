#include "kernel.h"
#include <queue>

int Solution::minDepth(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    std::queue<TreeNode*> level_order_queue;
    level_order_queue.push(root);
    level_order_queue.push(nullptr);
    int min_level = 0;

    while (!level_order_queue.empty())
    {
        TreeNode *current = level_order_queue.front();
        if (current == nullptr)
        {
            if (!level_order_queue.empty())
                level_order_queue.push(nullptr);
            min_level++; 
            level_order_queue.pop();
            continue;
        }

        if (current->left == nullptr && current->right == nullptr)
        {
            return min_level+1;
        }

        if (current->left != nullptr)
            level_order_queue.push(current->left);
        if (current->right != nullptr)
            level_order_queue.push(current->right);

        level_order_queue.pop();
    }
    return -1;  // should not reach here
}