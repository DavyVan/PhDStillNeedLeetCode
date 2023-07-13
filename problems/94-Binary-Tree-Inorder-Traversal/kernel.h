#ifndef __94_KERNEL_H__
#define __94_KERNEL_H__

#include <vector>
#include "../../utils/binary_tree.h"
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        _inorderTraversal(root, ret);
        return ret;
    }

private:
    void _inorderTraversal(TreeNode* root, vector<int>& ret) {
        if (root == nullptr)
        {
            return;
        }
        if (root->left != nullptr) 
        {
            _inorderTraversal(root->left, ret);
        }
        ret.push_back(root->val);
        if (root->right != nullptr) 
        {
            _inorderTraversal(root->right, ret);
        }
    }
};

#endif  // __94_KERNEL_H__