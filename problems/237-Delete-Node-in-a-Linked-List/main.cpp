#include "kernel.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int size, target;
    cout << "Input <size> <target>: ";
    while (cin >> size >> target)
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        cout << "Input <nums>...: ";
        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        LinkedList ll;
        ListNode *tail;
        ListNode *head = ll.construct_from_array(nums, size, tail);

        ListNode *target_ptr = head;
        while (target_ptr->val != target)
        {
            target_ptr = target_ptr->next;
        }

        Solution::deleteNode(target_ptr);
        while (head != nullptr)
        {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
        cout << "Input <size> <target>: ";
    }
}