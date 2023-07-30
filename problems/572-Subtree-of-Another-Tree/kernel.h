#ifndef __572_KERNEL_H__
#define __572_KERNEL_H__

// #include <string>
// #include <vector>
// #include <map>
// #include <tuple>
// #include <cmath>
// #include <limits>
#include "../../utils/binary_tree.h"
// using namespace std;

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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (compare(root, subRoot)) return true;

        if (root->left != nullptr && isSubtree(root->left, subRoot)) return true;

        if (root->right != nullptr && isSubtree(root->right, subRoot)) return true;

        return false;
    }
private:
    bool compare(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) return true;
        else if (root == nullptr || subRoot == nullptr) return false;

        if (root->val == subRoot->val) {
            return compare(root->left, subRoot->left) && compare(root->right, subRoot->right);
        } else return false;
    }
};

#endif  // __572_KERNEL_H__