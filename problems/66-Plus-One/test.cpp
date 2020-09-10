#include "kernel.h"
#include <gtest/gtest.h>

TEST(_66, _zero)
{
    int size = 1;
    int digits[] = {0};
    int expect[] = {1};
    int expect_size = 1;

    int ret_size;
    int *ret = plusOne(digits, size, &ret_size);

    EXPECT_EQ(ret_size, expect_size);
    for (int i = 0; i < expect_size; i++)
        EXPECT_EQ(ret[i], expect[i]);
}

TEST(_66, _123)
{
    int size = 3;
    int digits[] = {1, 2, 3};
    int expect[] = {1, 2, 4};
    int expect_size = 3;

    int ret_size;
    int *ret = plusOne(digits, size, &ret_size);

    EXPECT_EQ(ret_size, expect_size);
    for (int i = 0; i < expect_size; i++)
        EXPECT_EQ(ret[i], expect[i]);
}

TEST(_66, _9999)
{
    int size = 4;
    int digits[] = {9, 9, 9, 9};
    int expect[] = {1, 0, 0, 0, 0};
    int expect_size = 5;

    int ret_size;
    int *ret = plusOne(digits, size, &ret_size);

    EXPECT_EQ(ret_size, expect_size);
    for (int i = 0; i < expect_size; i++)
        EXPECT_EQ(ret[i], expect[i]);
}