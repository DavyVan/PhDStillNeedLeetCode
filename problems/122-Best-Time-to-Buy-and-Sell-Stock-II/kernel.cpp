#include "kernel.h"

// Key idea: buy before climb; sell before drop
int maxProfit(int* prices, int pricesSize)
{
    if (pricesSize < 2)
        return 0;

    int total_profit = 0;
    int brought_day = -1;

    for (int i = 0; i < pricesSize-1; i++)
    {
        if (prices[i+1] > prices[i])    // going up
        {
            if (brought_day == -1)      // not brought yet
            {
                brought_day = i;        // buy
            }
            else                        // brought already
            {
                continue;               // hold, do nothing
            }
        }
        else if (prices[i+1] == prices[i])
            continue;
        else                            // going down
        {
            if (brought_day == -1)      // not brought yet
                continue;
            else                        // brought already, sell
            {
                int profit = prices[i] - prices[brought_day];
                if (profit > 0) // should be always true
                {
                    total_profit += profit;
                    brought_day = -1;
                }
            }
            
        }
    }

    // the last element
    if (brought_day != -1)  // brought something
    {
        total_profit += prices[pricesSize-1] - prices[brought_day];
    }

    return total_profit;
}