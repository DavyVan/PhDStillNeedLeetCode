#ifndef __530_KERNEL_H__
#define __530_KERNEL_H__

// #include <string>
// #include <vector>
// #include <map>
// #include <cmath>
#include <limits>
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
    int getMinimumDifference(TreeNode* root) {
        int prev = -1;
        int min = numeric_limits<int>::max();
        inorderSearch(root, prev, min);
        return min;
    }

private:
    void inorderSearch(TreeNode* root, int& prev, int& min) {
        if (root->left != nullptr) {
            inorderSearch(root->left, prev, min);
        }

        if (prev >= 0 && root->val - prev < min) {
            min = root->val - prev;
        }
        prev = root->val;

        if (root->right != nullptr) {
            inorderSearch(root->right, prev, min);
        }
    }
};

#endif  // __530_KERNEL_H__