#include "kernel.h"
#include <stack>

bool Solution::hasPathSum(TreeNode *root, int sum)
{
    if (root == nullptr)
    {
        return false;
    }

    std::stack<TreeNode*> st;
    int current_sum = 0;

    st.push(root);
    current_sum += root->val;

    // push the first path
    TreeNode *t = root;
    TreeNode *last = nullptr;   // update on pop
    while (!st.empty())
    {
        t = st.top();
        if (t->left == nullptr && t->right == nullptr)  // it is a leaf node
        {
            if (current_sum == sum)
                return true;
            else
            {
                // pop
                st.pop();
                current_sum -= t->val;
                last = t;
            }
            
        }
        else if (t->left != nullptr && last == t->left)   // just come back from left branch
        {
            if (t->right != nullptr)
            {
                st.push(t->right);
                current_sum += t->right->val;
            }
            else    // no right child, done for the current node
            {
                st.pop();
                current_sum -= t->val;
                last = t;
            }
            
        }
        else if (t->right != nullptr && last == t->right)
        {
            st.pop();
            current_sum -= t->val;
            last = t;
        }
        else if (t->left != nullptr)
        {
            st.push(t->left);
            current_sum += t->left->val;
        }
        else if (t->right != nullptr)
        {
            st.push(t->right);
            current_sum += t->right->val;
        }
    }
    return false;
}