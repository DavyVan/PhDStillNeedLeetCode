#include "kernel.h"
#include <queue>

int Solution::maxDepth(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    std::queue<TreeNode*> level_order_queue;
    level_order_queue.push(root);
    level_order_queue.push(nullptr);
    int max_level = 0;

    while (!level_order_queue.empty())
    {
        TreeNode *current = level_order_queue.front();
        if (current == nullptr) // end of current level
        {
            level_order_queue.pop();
            max_level++;
            if (!level_order_queue.empty())
                level_order_queue.push(nullptr);
        }
        else
        {
            level_order_queue.pop();
            if (current->left != nullptr)
                level_order_queue.push(current->left);
            if (current->right != nullptr)
                level_order_queue.push(current->right);
        }
        
    }
    return max_level;
}