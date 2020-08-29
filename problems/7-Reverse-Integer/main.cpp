#include "kernel.h"
#include <stdio.h>

int main()
{
    int in, out;
    printf("Input: <Integer>\n");
    while (scanf("%d", &in))
    {
        out = reverse(in);
        printf("%d\n", out);
    }
}