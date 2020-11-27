#include "kernel.h"
#include <cstdlib>
#include <iostream>
using namespace std;

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

        LinkedList ll;
        ListNode* tail;
        ListNode* head = ll.construct_from_array(nums, size, tail);
        cout << (Solution::isPalindrome(head) ? "True" : "False") << endl;
        free(nums);

        cout << "Input <size>: ";
    }
}