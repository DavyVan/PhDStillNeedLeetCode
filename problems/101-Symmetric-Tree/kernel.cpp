#include "kernel.h"
#include <queue>
#include <stack>

bool isMirror(struct TreeNode* left, struct TreeNode* right)
{
    if (left == NULL && right == NULL)
    {
        return true;
    }
    else if ((left == NULL && right != NULL) || (left != NULL && right == NULL))
    {
        return false;
    }

    // So far, left and right are both not null.
    if (left->val != right->val)
    {
        return false;
    }
    else
    {
        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
}

bool isSymmetric_recursive(struct TreeNode* root)
{
    if (root == NULL)
        return true;
    return isMirror(root->left, root->right);
}

bool isSymmetric(struct TreeNode* root)
{
    return isSymmetric_recursive(root);
}

/* ------- The iterative version is implemented in pure C++ to use STL ------ */

bool isSymmetric_iterative(struct TreeNode* root)
{
    std::queue<TreeNode*> level_order_queue;
    std::queue<TreeNode*> level_order_queue_reversed;

    level_order_queue.push(root);
    level_order_queue_reversed.push(root);

    while (!level_order_queue.empty() && !level_order_queue_reversed.empty())
    {
        // compare the front element
        TreeNode *a = level_order_queue.front();
        TreeNode *b = level_order_queue_reversed.front();

        if ((a == NULL && b != NULL) || (a != NULL && b == NULL))
            return false;
        else if (a != NULL && b != NULL && a->val != b->val)
            return false;
        else if (a == NULL && b == NULL) 
        {
            level_order_queue.pop();
            level_order_queue_reversed.pop();
        }
        else if (a->val == b->val)    // match
        {
            level_order_queue.pop();
            level_order_queue.push(a->left);
            level_order_queue.push(a->right);
            level_order_queue_reversed.pop();
            level_order_queue_reversed.push(b->right);
            level_order_queue_reversed.push(b->left);
        }
    }

    if (level_order_queue.empty() != level_order_queue_reversed.empty())
        return false;
    else 
        return true;
}