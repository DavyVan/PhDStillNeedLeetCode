#include "kernel.h"

// Solution 2: Two pointers
bool hasCycle(struct ListNode *head)
{
    if (head == NULL)
        return false;
    else if (head->next == NULL)
        return false;

    struct ListNode *fast = head->next;
    struct ListNode *slow = head;

    while (fast != slow)
    {
        if (fast == NULL || fast->next == NULL)
            return false;

        slow = slow->next;
        fast = fast->next->next;
    }

    return true;
}