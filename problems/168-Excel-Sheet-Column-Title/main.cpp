#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Input <n>: ");
    while (scanf("%d", &n))
    {
        char *ret = convertToTitle(n);
        printf("%s\n", ret);
        printf("Input <n>: ");
    }
}