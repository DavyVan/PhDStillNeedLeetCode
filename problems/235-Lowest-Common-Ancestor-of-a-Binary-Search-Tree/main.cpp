#include "kernel.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int size, p_val, q_val;
    cout << "Input <size> <p> <q>: ";
    while (cin >> size >> p_val >> q_val)
    {
        int* nums = (int*) malloc(sizeof(int) * size);
        cout << "Input <nums>...: ";
        for (int i = 0; i < size; i++)
            cin >> nums[i];

        BinaryTree bt;
        TreeNode* head = bt.construct_from_level_order_array(nums, size);
        TreeNode p{p_val, nullptr, nullptr};
        TreeNode q{q_val, nullptr, nullptr};
        TreeNode* ret = lowestCommonAncestor(head, &p, &q);
        cout << ret->val << endl;
        cout << "Input <size> <p> <q>: ";
    }
}