#ifndef __563_KERNEL_H__
#define __563_KERNEL_H__

// #include <string>
// #include <vector>
// #include <map>
#include <tuple>
#include <cmath>
// #include <limits>
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
    int findTilt(TreeNode* root) {
        if (root == nullptr) return 0;
        return get<0>(_postOrder(root));
    }

private:
    /***
     * @brief 
     * 
     * @param root 
     * @return tuple<int, int> sum of tilt and sum of nodes
     */
    tuple<int, int> _postOrder(TreeNode* root) {
        int leftTilt = 0, leftSum = 0, rightTilt = 0, rightSum = 0;
        if (root->left != nullptr) {
            tie(leftTilt, leftSum) = _postOrder(root->left);
        }
        if (root->right != nullptr) {
            tie(rightTilt, rightSum) = _postOrder(root->right);
        }

        int rootTilt = abs(leftSum - rightSum) + leftTilt + rightTilt;
        int rootSum = root->val + leftSum + rightSum;

        return make_tuple(rootTilt, rootSum);
    }
};

#endif  // __563_KERNEL_H__