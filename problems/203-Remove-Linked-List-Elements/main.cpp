#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, val;
    printf("Input <size> <val>: ");
    while (scanf("%d %d", &size, &val))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        LinkedList ll;
        ListNode *tail;
        ListNode *head = ll.construct_from_array(nums, size, tail);

        head = removeElements(head, val);

        while (head != NULL)
        {
            printf("%d ", head->val);
            head = head->next;
        }
    }
    
}