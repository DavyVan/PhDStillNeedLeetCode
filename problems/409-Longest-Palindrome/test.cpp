#include "kernel.h"
#include <gtest/gtest.h>

TEST(_409, _1)
{
    int expect = 7;

    Solution s;
    int result = s.longestPalindrome("aaaAaaaa");

    EXPECT_EQ(result, expect);
}

TEST(_409, _2)
{
    int expect = 983;

    Solution s;
    int result = s.longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");

    EXPECT_EQ(result, expect);
}

TEST(_409, _3)
{
    int expect = 7;

    Solution s;
    int result = s.longestPalindrome("abccccdd");

    EXPECT_EQ(result, expect);
}

TEST(_409, _4)
{
    int expect = 1;

    Solution s;
    int result = s.longestPalindrome("a");

    EXPECT_EQ(result, expect);
}