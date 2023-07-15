#include "kernel.h"
#include <gtest/gtest.h>

TEST(_412, _1)
{
    vector<string> expect = {"1", "2", "Fizz"};

    Solution s;
    vector<string> result = s.fizzBuzz(3);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_412, _2)
{
    vector<string> expect = {"1", "2", "Fizz", "4", "Buzz"};

    Solution s;
    vector<string> result = s.fizzBuzz(5);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}

TEST(_412, _3)
{
    vector<string> expect = {"1", "2", "Fizz", "4", "Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"};

    Solution s;
    vector<string> result = s.fizzBuzz(15);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_TRUE(result[i] == expect[i]);
    }
}