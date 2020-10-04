#include "kernel.h"
#include <gtest/gtest.h>
#include <vector>

TEST(_118, _0rows)
{
    int numRows = 0;
    int expect_returnSize = 0;

    int returnSize;
    int *returnColumneSizes = NULL;
    int **ret = generate(numRows, &returnSize, &returnColumneSizes);

    EXPECT_EQ(returnSize, expect_returnSize);
}

TEST(_118, _1row)
{
    int numRows = 1;
    int expect_returnSize = 1;
    int expect_returnColSizes[] = {1};
    std::vector<std::vector<int> > expect_ret = {{1}};

    int returnSize;
    int *returnColumneSizes = NULL;
    int **ret = generate(numRows, &returnSize, &returnColumneSizes);

    EXPECT_EQ(returnSize, expect_returnSize);
    for (int i = 0; i < returnSize; i++)
        EXPECT_EQ(returnColumneSizes[i], expect_returnColSizes[i]);
    for (int i = 0; i < returnSize; i++)
    {
        for (int j = 0; j < returnColumneSizes[i]; j++)
            EXPECT_EQ(ret[i][j], expect_ret[i][j]);
    }
}

TEST(_118, _5rows)
{
    int numRows = 5;
    int expect_returnSize = 5;
    int expect_returnColSizes[] = {1, 2, 3, 4, 5};
    std::vector<std::vector<int> > expect_ret = {{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}};

    int returnSize;
    int *returnColumneSizes = NULL;
    int **ret = generate(numRows, &returnSize, &returnColumneSizes);

    EXPECT_EQ(returnSize, expect_returnSize);
    for (int i = 0; i < returnSize; i++)
        EXPECT_EQ(returnColumneSizes[i], expect_returnColSizes[i]);
    for (int i = 0; i < returnSize; i++)
    {
        for (int j = 0; j < returnColumneSizes[i]; j++)
            EXPECT_EQ(ret[i][j], expect_ret[i][j]);
    }
}