#include "kernel.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q)
{
    struct TreeNode* current_ancestor = root;
    int left = (p->val < q->val ? p->val : q->val);
    int right = (p->val > q->val ? p->val : q->val);

    while (true)
    {
        int current_val = current_ancestor->val;
        if (left < current_val && right > current_val)  // The current is the ancestor
        {
            return current_ancestor;
        }
        else if (left < current_val && right < current_val)
        {
            current_ancestor = current_ancestor->left;
        }
        else if (left > current_val && right > current_val)
        {
            current_ancestor = current_ancestor->right;
        }
        else if (left == current_val || right == current_val)
        {
            return current_ancestor;
        }
    }
}

