#include "kernel.h"
#include <gtest/gtest.h>

TEST(_203, _1)
{
    int size = 7;
    int nums[] = {1, 2, 6, 3, 4, 5, 6};
    int val = 6;
    int expect_size = 5;
    int expect[] = {1, 2, 3, 4, 5};

    LinkedList ll;
    ListNode *tail;
    ListNode *head = ll.construct_from_array(nums, size, tail);
    head = removeElements(head, val);
    int i = 0;
    while (head != nullptr)
    {
        ASSERT_TRUE(i < expect_size);
        EXPECT_EQ(head->val, expect[i++]);
        head = head->next;
    }
}

TEST(_203, _2)
{
    int size = 1;
    int nums[] = {1};
    int val = 1;
    // int expect_size = 0;
    // int *expect = nullptr;

    LinkedList ll;
    ListNode *tail;
    ListNode *head = ll.construct_from_array(nums, size, tail);
    head = removeElements(head, val);
    EXPECT_TRUE(head == NULL);
}

TEST(_203, empty)
{
    // int size = 1;
    // int nums[] = {1};
    int val = 1;
    // int expect_size = 0;
    // int *expect = nullptr;

    // LinkedList ll;
    // ListNode *tail;
    ListNode *head = nullptr;
    head = removeElements(head, val);
    EXPECT_TRUE(head == NULL);
}