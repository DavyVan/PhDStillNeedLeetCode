#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>
#include <algorithm>

TEST(_646, _1)
{
    auto expect = vector<string>{"Shogun"};
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};

    Solution S;
    auto result = S.findRestaurant(list1, list2);

    sort(expect.begin(), expect.end());
    sort(result.begin(), result.end());

    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_646, _2)
{
    auto expect = vector<string>{"Shogun"};
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"KFC","Shogun","Burger King"};

    Solution S;
    auto result = S.findRestaurant(list1, list2);

    sort(expect.begin(), expect.end());
    sort(result.begin(), result.end());

    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_646, _3)
{
    auto expect = vector<string>{"sad","happy"};
    vector<string> list1 = {"happy","sad","good"};
    vector<string> list2 = {"sad","happy","good"};

    Solution S;
    auto result = S.findRestaurant(list1, list2);

    sort(expect.begin(), expect.end());
    sort(result.begin(), result.end());

    EXPECT_TRUE(result.size() == expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}
