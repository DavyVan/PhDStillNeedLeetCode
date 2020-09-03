#include "kernel.h"
#include <gtest/gtest.h>
#include <stdlib.h>

TEST(_21, _124_134)
{
    int l1_size = 3;
    int l1_val[] = {1, 2, 4};
    int l2_size = 3;
    int l2_val[] = {1, 3, 4};
    int results[] = {1, 1, 2, 3, 4, 4};

    // construct linked list
    struct ListNode *l1, *l1_cur, *l2, *l2_cur;
    l1 = l1_cur = new ListNode();
    l1_cur->val = l1_val[0];
    for (int i = 1; i < l1_size; i++)
    {
        l1_cur->next = new ListNode();
        l1_cur = l1_cur->next;
        l1_cur->val = l1_val[i];
    }

    l2 = l2_cur = new ListNode();
    l2_cur->val = l2_val[0];
    for (int i = 1; i < l2_size; i++)
    {
        l2_cur->next = new ListNode();
        l2_cur = l2_cur->next;
        l2_cur->val = l2_val[i];
    }

    struct ListNode *res = mergeTwoLists(l1, l2);
    struct ListNode *t;

    for (int i = 0; i < l1_size + l2_size; i++)
    {
        EXPECT_EQ(res->val, results[i]);
        t = res;
        res = res->next;
        delete t;
    }
}

TEST(_21, _empty)
{
    int l1_size = 0;
    // int l1_val[] = {};
    int l2_size = 3;
    int l2_val[] = {1, 3, 4};
    int results[] = {1, 3, 4};

    // construct linked list
    struct ListNode *l1, *l1_cur, *l2, *l2_cur;
    l1 = NULL;

    l2 = l2_cur = new ListNode();
    l2_cur->val = l2_val[0];
    for (int i = 1; i < l2_size; i++)
    {
        l2_cur->next = new ListNode();
        l2_cur = l2_cur->next;
        l2_cur->val = l2_val[i];
    }

    struct ListNode *res = mergeTwoLists(l1, l2);
    struct ListNode *t;

    for (int i = 0; i < l1_size + l2_size; i++)
    {
        EXPECT_EQ(res->val, results[i]);
        t = res;
        res = res->next;
        delete t;
    }
}