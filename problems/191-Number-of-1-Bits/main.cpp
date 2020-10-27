#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint32_t n;
    printf("Input <n>: ");
    while (scanf("%u", &n))
    {
        printf("%d\n", hammingWeight(n));
        printf("Input <n>: ");
    }
}