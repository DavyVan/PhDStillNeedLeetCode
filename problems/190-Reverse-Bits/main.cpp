#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint32_t n;
    printf("Input <uint32_t (decimal)>: ");
    while (scanf("%u", &n))
    {
        printf("%u\n", reverseBits(n));
        printf("Input <uint32_t (decimal)>: ");
    }
}