#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size;
    printf("Input the full size of A: ");
    while (scanf("%d", &size))
    {
        int *nums_a = (int*) malloc(sizeof(int) * size);
        printf("Input <nums of A, including the common part>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums_a[i]);
        LinkedList ll_a;
        ListNode *tail_a;
        ListNode *head_a = ll_a.construct_from_array(nums_a, size, tail_a);

        printf("Input the size of non-intersected part of B: ");
        scanf("%d", &size);
        int *nums_b = (int*) malloc(sizeof(int) * size);
        printf("Input <nums of B, except for the common part>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums_b[i]);
        ListNode *tail_b;
        LinkedList ll_b;
        ListNode *head_b = ll_b.construct_from_array(nums_b, size, tail_b);

        printf("Input the index of intersected node: ");
        int pos;
        scanf("%d", &pos);
        if (pos >= 0)
            tail_b->next = ll_a.get(pos);

        ListNode *common = getIntersectionNode(head_a, head_b);
        if (common == NULL)
            printf("NULL\n");
        else
            printf("%d\n", common->val);
        printf("Input the full size of A: ");
    }
}