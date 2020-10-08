#include "kernel.h"

int maxProfit(int* prices, int pricesSize)
{
    if (pricesSize < 2)
        return 0;

    int min = prices[0];
    int max_profit = -1;

    for (int i = 1; i < pricesSize; i++)
    {
        // calculate profit
        int p = prices[i] - min;
        if (p > max_profit)
            max_profit = p;

        // update the min price
        if (prices[i] < min)
            min = prices[i];
    }

    return (max_profit > 0 ? max_profit : 0);
}