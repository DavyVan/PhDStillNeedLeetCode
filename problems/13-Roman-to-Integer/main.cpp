#include "kernel.h"
#include <stdio.h>

int main()
{
    char in[100];
    while (fgets(in, 100, stdin))
    {
        printf("%d\n", romanToInt(in));
    }
}