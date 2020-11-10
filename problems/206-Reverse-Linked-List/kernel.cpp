#include "kernel.h"

struct ListNode* reverseList(struct ListNode* head)
{
    if (head == NULL)
        return NULL;

    struct ListNode* ret = head;
    struct ListNode* current = head->next;
    struct ListNode* t = NULL;
    while (current != NULL)
    {
        t = current;
        current = current->next;

        t->next = ret;
        ret = t;
    }

    head->next = NULL;

    return ret;
}