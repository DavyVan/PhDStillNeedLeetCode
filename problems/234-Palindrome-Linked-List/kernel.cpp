#include "kernel.h"

// O(n) time, O(1) memory
// the original linked list will be changed
bool Solution::isPalindrome(ListNode* head)
{
    if (head == nullptr)
        return true;

    // find the middle point
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* left = head;
    ListNode* right = slow;
    // reverse the right part
    ListNode* t;;
    fast = right->next;   // fast is re-used
    right->next = nullptr;
    while (fast != nullptr)
    {
        t = fast;
        fast = fast->next;
        t->next = right;
        right = t;
    }

    // check
    fast = right;
    while (left != right && fast != nullptr)
    {
        if (left->val != fast->val)
            return false;
        
        left = left->next;
        fast = fast->next;
    }
    return true;
}