#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input <num>: ");
    while (scanf("%d", &num))
    {
        printf(isPerfectSquare(num) ? "True\n" : "False\n");
        printf("Input <num>: ");
    }
}