#include "kernel.h"
#include <iostream>
#include <vector>
using namespace std;

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
        TreeNode* root = bt.construct_from_level_order_array(nums.data(), size);
        int ret = Solution::sumOfLeftLeaves(root);
        printf("%d\n", ret);

        cout << "Input <size>: ";
    }
}