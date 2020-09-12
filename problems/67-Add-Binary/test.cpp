#include "kernel.h"
#include <gtest/gtest.h>

TEST(_67, _1)
{
    int size_a = 2;
    char a[] = "11";
    int size_b = 1;
    char b[] = "1";
    char expect[] = "100";

    char *ret = addBinary(a, b);

    // fprintf(stderr, "%s %s\n", ret, expect);
    EXPECT_STREQ(ret, expect) << ret << " " << expect;
}

TEST(_67, _2)
{
    int size_a = 4;
    char a[] = "1010";
    int size_b = 4;
    char b[] = "1011";
    char expect[] = "10101";

    char *ret = addBinary(a, b);

    // fprintf(stderr, "%s %s\n", ret, expect);
    EXPECT_STREQ(ret, expect) << ret << " " << expect;
}

TEST(_67, _3_zero)
{
    int size_a = 1;
    char a[] = "0";
    int size_b = 4;
    char b[] = "1011";
    char expect[] = "1011";

    char *ret = addBinary(a, b);

    // fprintf(stderr, "%s %s\n", ret, expect);
    EXPECT_STREQ(ret, expect) << ret << " " << expect;
}