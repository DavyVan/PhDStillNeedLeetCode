#include "kernel.h"
#include <gtest/gtest.h>

TEST(_206, _1)
{
    int size = 5;
    int nums[] = {1, 2, 3, 4, 5};
    int expect[] = {5, 4, 3, 2, 1};

    LinkedList ll_in;
    ListNode *tail;
    ListNode *head_in = ll_in.construct_from_array(nums, size, tail);

    LinkedList ll_exp;
    ListNode *head_exp = ll_exp.construct_from_array(expect, size, tail);

    ListNode *ret = reverseList(head_in);

    while (ret != nullptr)
    {
        EXPECT_EQ(ret->val, head_exp->val);
        ret = ret->next;
        head_exp = head_exp->next;
    }
}

TEST(_206, empty)
{
    EXPECT_EQ(reverseList(nullptr), nullptr);
}