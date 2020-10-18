#include "kernel.h"

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    int len_a = 0, len_b = 0;
    struct ListNode *t;

    // get the length of A
    t = headA;
    while (t->next != NULL)
    {
        t = t->next;
        len_a++;
    }

    // get the length of B
    t = headB;
    while (t->next != NULL)
    {
        t = t->next;
        len_b++;
    }

    struct ListNode *a = headA, *b = headB;
    if (len_a > len_b)
    {
        for (int i = 0; i < len_a-len_b; i++)
            a = a->next;
    }
    else if (len_b > len_a)
    {
        for (int i = 0; i < len_b-len_a; i++)
            b = b->next;
    }

    while (a != b && a != NULL && b != NULL)
    {
        a = a->next;
        b = b->next;
    }
    
    if (a == b)
        return a;
    else 
        return NULL;
}