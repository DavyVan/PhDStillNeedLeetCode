#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x;

    printf("Input: <x>");
    while (scanf("%d", &x))
    {
        printf("%d\n", mySqrt(x));
        printf("Input: <x>");
    }
}