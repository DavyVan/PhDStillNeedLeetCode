#include "kernel.h"

// return the bf of the current node
void is_balanced(struct TreeNode *root, int *height, bool *balanced)
{
    if (root == NULL)
    {
        *height = 0;
        *balanced = true;
        return;
    }

    int height_left, height_right;
    bool balanced_left, balanced_right;

    is_balanced(root->left, &height_left, &balanced_left);
    is_balanced(root->right, &height_right, &balanced_right);

    if (height_left > height_right)
        *height = height_left;
    else
        *height = height_right;
    (*height)++;

    if (!(balanced_left && balanced_right))
    {
        *balanced = false;
    }
    else
    {
        *balanced = ((height_left - height_right >= -1) && (height_left - height_right <= 1));
    }
    
}

bool isBalanced(struct TreeNode* root)
{
    int h;
    bool b;
    is_balanced(root, &h, &b);
    return b;
}