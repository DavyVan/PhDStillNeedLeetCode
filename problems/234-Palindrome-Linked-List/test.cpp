#include "kernel.h"
#include <gtest/gtest.h>

TEST(_234, _1)
{
    int size = 2;
    int nums[] = {1, 2};
    bool expect = false;
    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums, size, tail);
    EXPECT_EQ(Solution::isPalindrome(head), expect);
}

TEST(_234, _2)
{
    int size = 4;
    int nums[] = {1, 2, 2, 1};
    bool expect = true;
    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums, size, tail);
    EXPECT_EQ(Solution::isPalindrome(head), expect);
}