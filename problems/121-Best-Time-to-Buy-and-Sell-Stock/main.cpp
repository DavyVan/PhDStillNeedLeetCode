#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size;
    printf("Input <size>: ");
    while (scanf("%d", &size))
    {
        int *prices = (int*) malloc(sizeof(int) * size);
        printf("Input <prices>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &prices[i]);
        
        printf("%d\n", maxProfit(prices, size));
        printf("Input <size>: ");
    }
}