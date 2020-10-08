#include "kernel.h"
#include <gtest/gtest.h>

TEST(_121, _1)
{
    int size = 6;
    int prices[] = {7, 1, 5, 3, 6, 4};
    int expect = 5;

    EXPECT_EQ(maxProfit(prices, size), expect);
}

TEST(_121, _2)
{
    int size = 5;
    int prices[] = {7, 6, 4, 3, 1};
    int expect = 0;

    EXPECT_EQ(maxProfit(prices, size), expect);
}