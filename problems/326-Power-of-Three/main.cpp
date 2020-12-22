#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input <n>: ");
    while (scanf("%d", &n))
    {
        printf(isPowerOfThree(n) ? "True\n" : "False\n");
        printf("Input <n>: ");
    }
}