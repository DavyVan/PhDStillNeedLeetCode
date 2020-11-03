#include "kernel.h"

struct ListNode* removeElements(struct ListNode* head, int val)
{
    if (head == NULL)
        return head;

    struct ListNode *current = head;
    struct ListNode *insert = head;
    struct ListNode *before_insert = NULL;
    while (current != NULL)
    {
        if (current->val != val)
        {
            insert->val = current->val;
            before_insert = insert;
            insert = insert->next;
        }
        current = current->next;
    }

    // I don't free the removed nodes because they will be freed in the utility function
    if (before_insert == NULL)  // in case that there is only one nodes in the LL AND it needs to be removed!
        return NULL;
    before_insert->next = NULL;

    return head;
}