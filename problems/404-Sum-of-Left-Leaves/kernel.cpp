#include "kernel.h"
#include <queue>
using namespace std;

int Solution::sumOfLeftLeaves(TreeNode* root)
{
    int sum = 0;
    queue<TreeNode*> q;     // BFS
    bool isLeft = true;

    // root
    if (root == nullptr)
        return 0;
    if (root->left == nullptr && root->right == nullptr)
        return 0;
    else 
    {
        q.push(root->left);
        q.push(root->right);
    }

    while (!q.empty())
    {
        TreeNode *cur = q.front();
        if (cur != nullptr)
        {
            if (cur->left == nullptr && cur->right == nullptr)
            {
                if (isLeft)
                    sum += cur->val;
            }
            else
            {
                q.push(cur->left);
                q.push(cur->right);
            }
            
        }
        
        q.pop();
        isLeft = !isLeft;
    }

    return sum;
}