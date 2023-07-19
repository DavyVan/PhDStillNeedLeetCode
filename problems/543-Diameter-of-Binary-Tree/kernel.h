#ifndef __543_KERNEL_H__
#define __543_KERNEL_H__

// #include <string>
// #include <vector>
// #include <map>
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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxPath = -1;
        postorderSearch(root, maxPath);
        return maxPath;
    }
private:
    /***
     * @brief 
     * 
     * @param root 
     * @param maxPath 
     * @return int max height of the current root's left and right children
     */
    int postorderSearch(TreeNode* root, int& maxPath) {
        int leftH, rightH;
        if (root->left != nullptr) {
            leftH = postorderSearch(root->left, maxPath) + 1;
        } else {
            leftH = 0;
        }
        if (root->right != nullptr) {
            rightH = postorderSearch(root->right, maxPath) + 1;
        } else {
            rightH = 0;
        }

        if (leftH + rightH > maxPath) {
            maxPath = leftH + rightH;
        }
        return (leftH > rightH ? leftH : rightH);
    }
};

#endif  // __543_KERNEL_H__