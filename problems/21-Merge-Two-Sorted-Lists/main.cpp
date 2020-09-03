#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int l1_size, l2_size;
    ListNode *l1, *l2, *l1_cur, *l2_cur;

    printf("Input the size of list 1 and list 2: <int int>");
    while (scanf("%d %d", &l1_size, &l2_size))
    {
        if (l1_size > 0)
        {
            // first element to init
            ListNode *t = new ListNode();
            scanf("%d", &(t->val));
            l1 = l1_cur = t;
        }
        for (int i = 1; i < l1_size; i++)
        {
            ListNode *t = new ListNode();
            scanf("%d", &(t->val));
            l1_cur->next = t;
            l1_cur = t;
        }
        if (l2_size > 0)
        {
            // first element to init
            ListNode *t = new ListNode();
            scanf("%d", &(t->val));
            l2 = l2_cur = t;
        }
        for (int i = 1; i < l2_size; i++)
        {
            ListNode *t = new ListNode();
            scanf("%d", &(t->val));
            l2_cur->next = t;
            l2_cur = t;
        }

        ListNode *t = mergeTwoLists(l1, l2);

        for (int i = 0; i < l1_size + l2_size; i++)
        {
            printf("%d ", t->val);
            t = t->next;
        }
        printf("\n");

        // free
    }
}