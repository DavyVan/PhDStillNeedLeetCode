#include "kernel.h"
#include <gtest/gtest.h>

TEST(_1108, _1_1_1_1)
{
    char *in = "1.1.1.1";
    char *out = "1[.]1[.]1[.]1";
    EXPECT_STREQ(defangIPaddr(in), out);
}

TEST(_1108, _11_11_11_11)
{
    char *in = "11.11.11.11";
    char *out = "11[.]11[.]11[.]11";
    EXPECT_STREQ(defangIPaddr(in), out);
}

TEST(_1108, _111_111_111_111)
{
    char *in = "111.111.111.111";
    char *out = "111[.]111[.]111[.]111";
    EXPECT_STREQ(defangIPaddr(in), out);
}

TEST(_1108, _1_11_111_11)
{
    char *in = "1.11.111.11";
    char *out = "1[.]11[.]111[.]11";
    EXPECT_STREQ(defangIPaddr(in), out);
}