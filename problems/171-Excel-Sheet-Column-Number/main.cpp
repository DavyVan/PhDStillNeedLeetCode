#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char in[10] = {0};
    printf("Input <string>: ");
    while (scanf("%s", in))
    {
        printf("%d\n", titleToNumber(in));
        printf("Input <string>: ");
        memset(in, 0, 10);
    }
}