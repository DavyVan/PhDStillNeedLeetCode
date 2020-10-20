#include "kernel.h"
#include <gtest/gtest.h>

TEST(_168, _1)
{
    int n = 1;
    char *expect = "A";

    char *ret = convertToTitle(n);
    EXPECT_STREQ(ret, expect);
    free(ret);
}

TEST(_168, _28)
{
    int n = 28;
    char *expect = "AB";

    char *ret = convertToTitle(n);
    EXPECT_STREQ(ret, expect);
    free(ret);
}

TEST(_168, _52)
{
    int n = 52;
    char *expect = "AZ";

    char *ret = convertToTitle(n);
    EXPECT_STREQ(ret, expect);
    free(ret);
}

TEST(_168, _701)
{
    int n = 701;
    char *expect = "ZY";

    char *ret = convertToTitle(n);
    EXPECT_STREQ(ret, expect);
    free(ret);
}

TEST(_168, _702)
{
    int n = 702;
    char *expect = "ZZ";

    char *ret = convertToTitle(n);
    EXPECT_STREQ(ret, expect);
    free(ret);
}

TEST(_168, _703)
{
    int n = 703;
    char *expect = "AAA";

    char *ret = convertToTitle(n);
    EXPECT_STREQ(ret, expect);
    free(ret);
}