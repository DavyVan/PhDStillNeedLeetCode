#include "kernel.h"
#include <gtest/gtest.h>

TEST(_1, _1)
{
    int nums[] = {2, 7, 11, 15};
    int numSize = 4;
    int target = 9;
    int solution[] = {0, 1};
    int *answer, retSize;
    
    answer = twoSum(nums, numSize, target, &retSize);

    EXPECT_EQ(solution[0], answer[0]);
    EXPECT_EQ(solution[1], answer[1]);

    free(answer);
}

TEST(_1, _2)
{
    int nums[] = {3, 2, 4};
    int numSize = 3;
    int target = 6;
    int solution[] = {1, 2};
    int *answer, retSize;
    
    answer = twoSum(nums, numSize, target, &retSize);

    EXPECT_EQ(solution[0], answer[0]);
    EXPECT_EQ(solution[1], answer[1]);

    free(answer);
}

TEST(_1, _3)
{
    int nums[] = {3, 3};
    int numSize = 2;
    int target = 6;
    int solution[] = {0, 1};
    int *answer, retSize;
    
    answer = twoSum(nums, numSize, target, &retSize);

    EXPECT_EQ(solution[0], answer[0]);
    EXPECT_EQ(solution[1], answer[1]);

    free(answer);
}