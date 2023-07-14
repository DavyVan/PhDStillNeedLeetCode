#ifndef __145_KERNEL_H__
#define __145_KERNEL_H__

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        _postorderTraversal(root, ret);
        return ret;
    }

private:
    void _postorderTraversal(TreeNode* root, vector<int>& ret) {
        if (root == nullptr)
        {
            return;
        }
        
        if (root->left != nullptr) 
        {
            _postorderTraversal(root->left, ret);
        }
        if (root->right != nullptr) 
        {
            _postorderTraversal(root->right, ret);
        }
        ret.push_back(root->val);
    }
};

#endif  // __145_KERNEL_H__