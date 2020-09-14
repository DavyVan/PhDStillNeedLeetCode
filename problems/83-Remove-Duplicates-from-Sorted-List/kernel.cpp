#include "kernel.h"
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if (head == NULL)
        return head;
        
    struct ListNode *cur, *last;
    last = head;
    cur = head->next;

    while (cur != NULL)
    {
        if (last->val == cur->val)
        {
            // the current need to deleted
            last->next = cur->next;
            free(cur);
            cur = last->next;
        }
        else
        {
            // continue
            last = cur;
            cur = cur->next;
        }
    }
    return head;
}