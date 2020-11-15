#include "kernel.h"
#include <iostream>
#include <cstdlib>

int main()
{
    int size;
    cout << "Input <size>: ";
    while (cin >> size)
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        cout << "Input <nums>...: ";
        for (int i = 0; i < size; i++)
            cin >> nums[i];

        BinaryTree bt;
        TreeNode* root = bt.construct_from_level_order_array(nums, size);
        TreeNode* rvt = invertTree(root);
        BinaryTree::print_level_order(rvt);
        cout << "Input <size>: ";
    }
}