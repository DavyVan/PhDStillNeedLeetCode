#include "kernel.h"

struct TreeNode* subBST(int *nums, int start, int end)
{
    int mid = (end + start + 1) / 2;
    struct TreeNode *root = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    if (mid == start)
        root->left = NULL;
    else
        root->left = subBST(nums, start, mid-1);
    if (mid == end)
        root->right = NULL;
    else
        root->right = subBST(nums, mid+1, end);
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize)
{
    if (numsSize == 0)
        return NULL;
    return subBST(nums, 0, numsSize-1);
}