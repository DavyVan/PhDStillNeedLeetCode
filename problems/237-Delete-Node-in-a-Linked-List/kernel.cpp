#include "kernel.h"

void Solution::deleteNode(ListNode* node)
{
    ListNode* current = node;
    ListNode* next = node->next;

    while (next->next != nullptr)
    {
        current->val = next->val;
        current = current->next;
        next = next->next;
    }
    current->val = next->val;
    current->next = nullptr;
    // free next;
}