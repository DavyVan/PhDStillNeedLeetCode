#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Input <n>: ");
    while (scanf("%d", &n))
    {
        printf("%d\n", countPrimes(n));
        printf("Input <n>: ");
    }
}