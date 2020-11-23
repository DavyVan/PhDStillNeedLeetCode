#include "kernel.h"
#include <gtest/gtest.h>

TEST(_228, _1)
{
    int size = 6;
    int nums[] = {0, 1, 2, 4, 5, 7};
    int expect_size = 3;
    char* expect[] = {"0->2", "4->5", "7"};

    int retsize;
    char** ret = summaryRanges(nums, size, &retsize);

    ASSERT_EQ(retsize, expect_size);
    for (int i = 0; i < retsize; i++)
    {
        EXPECT_STREQ(ret[i], expect[i]);
        free(ret[i]);
    }
    free(ret);
}

TEST(_228, _2)
{
    int size = 7;
    int nums[] = {0, 2, 3, 4, 6, 8, 9};
    int expect_size = 4;
    char* expect[] = {"0", "2->4", "6", "8->9"};

    int retsize;
    char** ret = summaryRanges(nums, size, &retsize);

    ASSERT_EQ(retsize, expect_size);
    for (int i = 0; i < retsize; i++)
    {
        EXPECT_STREQ(ret[i], expect[i]);
        free(ret[i]);
    }
    free(ret);
}

TEST(_228, _3)
{
    int size = 0;
    int *nums = nullptr;
    int expect_size = 0;
    // char** expect = nullptr;

    int retsize;
    char** ret = summaryRanges(nums, size, &retsize);

    ASSERT_EQ(retsize, expect_size);
    EXPECT_TRUE(ret == NULL);
}

TEST(_228, _4)
{
    int size = 1;
    int nums[] = {-1};
    int expect_size = 1;
    char* expect[] = {"-1"};

    int retsize;
    char** ret = summaryRanges(nums, size, &retsize);

    ASSERT_EQ(retsize, expect_size);
    for (int i = 0; i < retsize; i++)
    {
        EXPECT_STREQ(ret[i], expect[i]);
        free(ret[i]);
    }
    free(ret);
}

TEST(_228, _5)
{
    int size = 1;
    int nums[] = {0};
    int expect_size = 1;
    char* expect[] = {"0"};

    int retsize;
    char** ret = summaryRanges(nums, size, &retsize);

    ASSERT_EQ(retsize, expect_size);
    for (int i = 0; i < retsize; i++)
    {
        EXPECT_STREQ(ret[i], expect[i]);
        free(ret[i]);
    }
    free(ret);
}