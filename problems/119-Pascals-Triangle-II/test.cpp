#include "kernel.h"
#include <gtest/gtest.h>

TEST(_119, _0)
{
    int in = 0;
    int expect[] = {1};
    int expect_returnSize = 1;
    
    int returnSize;
    int *ret = getRow(in, &returnSize);
    ASSERT_EQ(returnSize, expect_returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        EXPECT_EQ(ret[i], expect[i]);
    }
}

TEST(_119, _1)
{
    int in = 1;
    int expect[] = {1, 1};
    int expect_returnSize = 2;
    
    int returnSize;
    int *ret = getRow(in, &returnSize);
    ASSERT_EQ(returnSize, expect_returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        EXPECT_EQ(ret[i], expect[i]);
    }
}

TEST(_119, _2)
{
    int in = 2;
    int expect[] = {1, 2, 1};
    int expect_returnSize = 3;
    
    int returnSize;
    int *ret = getRow(in, &returnSize);
    ASSERT_EQ(returnSize, expect_returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        EXPECT_EQ(ret[i], expect[i]);
    }
}