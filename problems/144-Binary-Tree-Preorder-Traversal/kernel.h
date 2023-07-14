#ifndef __144_KERNEL_H__
#define __144_KERNEL_H__

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        _preorderTraversal(root, ret);
        return ret;
    }

private:
    void _preorderTraversal(TreeNode* root, vector<int>& ret) {
        if (root == nullptr)
        {
            return;
        }
        ret.push_back(root->val);
        if (root->left != nullptr) 
        {
            _preorderTraversal(root->left, ret);
        }
        if (root->right != nullptr) 
        {
            _preorderTraversal(root->right, ret);
        }
    }
};

#endif  // __144_KERNEL_H__