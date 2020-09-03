#include "kernel.h"
#include <stdlib.h>

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *head = NULL;
    struct ListNode *current = NULL;

    if (l1 == NULL)
        return l2;
    else if (l2 == NULL)
        return l1;

    // assign the head
    if (l1->val < l2->val)
    {
        current = head = l1;
        l1 = l1->next;
    }
    else
    {
        current = head = l2;
        l2 = l2->next;
    }
    
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->val == l2->val)
        {
            // add both to new list
            current->next = l1;
            l1 = l1->next;
            current = current->next;
            current->next = l2;
            l2 = l2->next;
            current = current->next;
        }
        else if (l1->val < l2->val)
        {
            // add l1
            current->next = l1;
            l1 = l1->next;
            current = current->next;
        }
        else if (l1->val > l2->val)
        {
            // add l2
            current->next = l2;
            l2 = l2->next;
            current = current->next;
        }
        
    }

    if (l1 == NULL)
        current->next = l2;
    else
        current->next = l1;
    
    return head;
}