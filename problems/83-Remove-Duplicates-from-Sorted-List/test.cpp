#include "kernel.h"
#include <gtest/gtest.h>

struct ListNode* construct_linked_list_from_array(int *data, int size)
{
    if (size == 0)
        return NULL;

    struct ListNode *head = (struct ListNode*) malloc(sizeof(struct ListNode));
    head->next = NULL;
    head->val = data[0];
    struct ListNode *cur = head;

    for (int i = 1; i < size; i++)
    {
        struct ListNode *t = (struct ListNode*) malloc(sizeof(struct ListNode));
        t->next = NULL;
        t->val = data[i];
        cur->next = t;
        cur = t;
    }
    return head;
}

TEST(_83, _1)
{
    int data[] = {1, 1, 2};
    int size = 3;
    int expect[] = {1, 2};
    int expect_size = 2;

    struct ListNode *in = construct_linked_list_from_array(data, size);
    struct ListNode *ret = deleteDuplicates(in);

    struct ListNode *cur = ret;

    for (int i = 0; i < expect_size; i++)
    {
        ASSERT_FALSE(cur == NULL);
        
        EXPECT_EQ(cur->val, expect[i]);
        cur = cur->next;
    }
}

TEST(_83, _2)
{
    int data[] = {1, 1, 2, 3, 3};
    int size = 5;
    int expect[] = {1, 2, 3};
    int expect_size = 3;

    struct ListNode *in = construct_linked_list_from_array(data, size);
    struct ListNode *ret = deleteDuplicates(in);

    struct ListNode *cur = ret;

    for (int i = 0; i < expect_size; i++)
    {
        ASSERT_FALSE(cur == NULL);
        
        EXPECT_EQ(cur->val, expect[i]);
        cur = cur->next;
    }
}

TEST(_83, _empty)
{
    struct ListNode *ret = deleteDuplicates(NULL);

    EXPECT_TRUE(ret == NULL);
}