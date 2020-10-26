#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input <n>: ");
    while (scanf("%d", &n))
    {
        printf("%d\n", trailingZeroes(n));
        printf("Input <n>: ");
    }
}