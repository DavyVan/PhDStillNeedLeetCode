#include "kernel.h"

void Solution::binaryTreePaths_DFS(vector<TreeNode*> &stack, vector<string> &ret)
{
    TreeNode* current = *(stack.end()-1);
    if (current->left == nullptr && current->right == nullptr)
    {
        // leaf
        string s = "";
        for (int i = 0; i < stack.size()-1; i++)
        {
            s += to_string(stack[i]->val) + "->";
        }
        s += to_string((*(stack.end()-1))->val);
        ret.push_back(s);
    }

    if (current->left != nullptr)
    {
        stack.push_back(current->left);
        binaryTreePaths_DFS(stack, ret);
    }

    if (current->right != nullptr)
    {
        stack.push_back(current->right);
        binaryTreePaths_DFS(stack, ret);
    }

    stack.pop_back();
}

vector<string> Solution::binaryTreePaths(TreeNode* root)
{
    vector<TreeNode*> stack;
    stack.push_back(root);
    
    vector<string> ret;

    if (root == nullptr)
        return ret;

    binaryTreePaths_DFS(stack, ret);

    return ret;
}