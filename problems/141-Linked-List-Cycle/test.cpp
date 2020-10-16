#include "kernel.h"
#include <gtest/gtest.h>

TEST(_141, _1)
{
    int size = 4;
    int nums[] = {3, 2, 0, -4};
    int pos = 1;

    LinkedList list;
    ListNode *head, *tail;
    head = list.construct_from_array(nums, size, tail);
    list.add_circle(pos);

    EXPECT_EQ(hasCycle(head), true);
}

TEST(_141, _2)
{
    int size = 2;
    int nums[] = {1, 2};
    int pos = 0;

    LinkedList list;
    ListNode *head, *tail;
    head = list.construct_from_array(nums, size, tail);
    list.add_circle(pos);

    EXPECT_EQ(hasCycle(head), true);
}

TEST(_141, _3)
{
    int size = 1;
    int nums[] = {1};
    int pos = -1;

    LinkedList list;
    ListNode *head, *tail;
    head = list.construct_from_array(nums, size, tail);

    EXPECT_EQ(hasCycle(head), false);
}