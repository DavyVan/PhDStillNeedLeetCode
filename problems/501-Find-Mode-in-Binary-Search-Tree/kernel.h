#ifndef __501_KERNEL_H__
#define __501_KERNEL_H__

#include <vector>
#include <stack>
#include "../../utils/binary_tree.h"
#include <iostream>
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
    vector<int> findMode(TreeNode* root) {
        stack<int> stv;
        stack<int> stc;
        int currentVal = -100001;
        int currentCount;
        _midOrderIteration(root, stv, stc, currentVal, currentCount);

        while (!stc.empty() && stc.top() < currentCount) {
            stc.pop();
            stv.pop();
        }
        if (stc.empty() || stc.top() == currentCount) {
            stc.push(currentCount);
            stv.push(currentVal);
        }
        

        vector<int> result;
        while (!stv.empty()) {
            result.push_back(stv.top());
            stv.pop();
        }
        return result;
    }

private:
    void _midOrderIteration(TreeNode* root, stack<int>& stv, stack<int>& stc, int& currentVal, int& currentCount) {
        if (root->left != nullptr) {
            _midOrderIteration(root->left, stv, stc, currentVal, currentCount);
        }

        if (root->val != currentVal) {
            while (!stc.empty() && stc.top() < currentCount) {
                stc.pop();
                stv.pop();
            }

            if (currentVal == -100001) {
                currentVal = root->val;
                currentCount = 1;
            } else if (stc.empty() || stc.top() == currentCount) {
                stc.push(currentCount);
                stv.push(currentVal);
            }
            currentVal = root->val;
            currentCount = 1;
            
        } else {
            currentCount++;
        }
        
        if (root->right != nullptr) {
            _midOrderIteration(root->right, stv, stc, currentVal, currentCount);
        }
    }
};

#endif  // __501_KERNEL_H__