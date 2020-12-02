#include "kernel.h"
#include <cstdlib>
#include <iostream>

int main()
{
    int size;
    cout << "Input <size>: ";
    while (cin >> size)
    {
        vector<int> nums(size);
        cout << "Input <nums>...: ";
        for (int i = 0; i < size; i++)
            cin >> nums[i];

        BinaryTree bt;
        TreeNode* root = bt.construct_from_level_order_array(nums.data(), nums.size());
        vector<string> ret = Solution::binaryTreePaths(root);
        for (vector<string>::iterator it = ret.begin(); it < ret.end(); it++)
            cout << *it << endl;
        cout << "Input <size>: ";
    }
}