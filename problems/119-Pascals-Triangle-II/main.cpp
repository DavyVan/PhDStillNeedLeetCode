#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in, returnSize;
    printf("Input <rowIndex>: ");
    while (scanf("%d", &in))
    {
        int *ret = getRow(in, &returnSize);

        for (int i = 0; i < returnSize; i++)
            printf("%d ", ret[i]);
        printf("\n");
        free(ret);
        printf("Input <rowIndex>: ");
    }
}