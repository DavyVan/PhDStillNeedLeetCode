#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input <size>: ");
    while (scanf("%d", &size))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        LinkedList ll;
        ListNode *tail;
        ListNode *head = ll.construct_from_array(nums, size, tail);
        ListNode *ret = reverseList(head);
        
        while (ret != NULL)
        {
            printf("%d ", ret->val);
            ret = ret->next;
        }
        printf("\n");

        printf("Input <size>: ");
    }
}