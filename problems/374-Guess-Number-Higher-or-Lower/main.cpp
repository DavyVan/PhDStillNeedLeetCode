#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, pick;
    printf("Input <n> <pick>: ");
    while (scanf("%d %d", &n, &pick))
    {
        target_num = pick;
        int ret = guessNumber(n);
        printf("%d\n", ret);
        printf("Input <n> <pick>: ");
    }
}