#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size, pos;
    printf("Input <size> <pos>: ");
    while (scanf("%d %d", &size, &pos))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        LinkedList list;
        ListNode *head, *tail;
        head = list.construct_from_array(nums, size, tail);
        if (pos != -1)
            list.add_circle(pos);

        printf(hasCycle(head) ? "True\n" : "False\n");
        printf("Input <size>: ");
    }
}