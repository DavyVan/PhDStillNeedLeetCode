#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size;

    printf("Input <# of nodes> (# > 0): ");
    while (scanf("%d", &size))
    {
        printf("Input <nums>...: ");
        struct ListNode *head = (struct ListNode*) malloc(sizeof(struct ListNode));
        head->next = NULL;
        scanf("%d", &head->val);
        struct ListNode *cur = head;

        for (int i = 1; i < size; i++)
        {
            struct ListNode *t = (struct ListNode*) malloc(sizeof(struct ListNode));
            t->next = NULL;
            scanf("%d", &t->val);
            cur->next = t;
            cur = t;
        }

        struct ListNode *ret = deleteDuplicates(head);

        cur = ret;
        while (cur != NULL)
        {
            printf("%d ", cur->val);
            cur = cur->next;
            free(ret);
            ret = cur;
        }
        printf("Input <# of nodes>: ");
    }
}