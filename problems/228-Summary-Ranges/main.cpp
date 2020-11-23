#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input <size>: ");
    while (scanf("%d", &size))
    {
        int* nums = (int *) malloc(sizeof(int) * size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        int retsize;
        char** ret = summaryRanges(nums, size, &retsize);
        for (int i = 0; i < retsize; i++)
        {
            printf("%s, ", ret[i]);
            free(ret[i]);
        }
        printf("\n");
        free(ret);
        printf("Input <size>: ");
    }
}