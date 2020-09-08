#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n))
    {
        char *ret = countAndSay(n);
        printf("%s\n", ret);
        free(ret);
    }
}