#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input <num>: ");
    while (scanf("%d", &num))
    {
        printf("%d\n", addDigits(num));
        printf("Input <num>: ");
    }
}