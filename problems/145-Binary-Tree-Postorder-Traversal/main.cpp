#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    Solution s;
    while(true)
    {
        TreeNode* root = BinaryTree::input_and_construct("Input tree:")->root;

        vector<int> result = s.postorderTraversal(root);

        cout << "Answer:" << endl;
        for (auto it = result.begin(); it != result.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}