#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size;
    int *digits;

    while (scanf("%d", &size))
    {
        digits = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++)
            scanf("%d", &digits[i]);

        int ret_size;
        int *ret = plusOne(digits, size, &ret_size);

        for (int i = 0; i < ret_size; i++)
            printf("%d ", ret[i]);
        printf("\n");
        free(ret);
    }
}