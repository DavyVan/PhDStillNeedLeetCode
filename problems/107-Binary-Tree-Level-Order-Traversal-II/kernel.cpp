#include "kernel.h"
#include <queue>
#include <algorithm>


vector<vector<int>> Solution::levelOrderBottom(TreeNode* root)
{
    if (root == nullptr)
        return vector<vector<int>>(0);
    vector<vector<int>> ret;
    vector<int> current_level;
    queue<TreeNode*> level_order_queue;

    level_order_queue.push(root);
    level_order_queue.push(nullptr);

    while (!level_order_queue.empty())
    {
        TreeNode *current = level_order_queue.front();

        if (current == nullptr)
        {
            level_order_queue.pop();
            ret.push_back(current_level);
            current_level = vector<int>();
            if (!level_order_queue.empty())
                level_order_queue.push(nullptr);
        }
        else
        {
            level_order_queue.pop();
            current_level.push_back(current->val);
            if (current->left != nullptr)
                level_order_queue.push(current->left);
            if (current->right != nullptr)
                level_order_queue.push(current->right);
        }
        
    }
    reverse(ret.begin(), ret.end());
    return ret;
}