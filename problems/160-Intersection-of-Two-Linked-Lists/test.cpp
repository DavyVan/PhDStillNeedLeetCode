#include "kernel.h"
#include <gtest/gtest.h>
#include <vector>
using namespace std;

TEST(_160, _1)
{
    vector<int> nums_a = {4, 1, 8, 4, 5};
    vector<int> nums_b = {5, 6, 1};
    int pos = 2;
    int expect_val = 8;

    LinkedList ll_a;
    ListNode *tail_a;
    ListNode *head_a = ll_a.construct_from_array(nums_a.data(), nums_a.size(), tail_a);
    LinkedList ll_b;
    ListNode *tail_b;
    ListNode *head_b = ll_b.construct_from_array(nums_b.data(), nums_b.size(), tail_b);
    tail_b->next = ll_a.get(pos);
    
    ListNode *common = getIntersectionNode(head_a, head_b);
    ASSERT_NE(common, nullptr);

    EXPECT_EQ(common->val, expect_val);
}

TEST(_160, _2)
{
    vector<int> nums_a = {1, 9, 1, 2, 4};
    vector<int> nums_b = {3};
    int pos = 3;
    int expect_val = 2;

    LinkedList ll_a;
    ListNode *tail_a;
    ListNode *head_a = ll_a.construct_from_array(nums_a.data(), nums_a.size(), tail_a);
    LinkedList ll_b;
    ListNode *tail_b;
    ListNode *head_b = ll_b.construct_from_array(nums_b.data(), nums_b.size(), tail_b);
    tail_b->next = ll_a.get(pos);
    
    ListNode *common = getIntersectionNode(head_a, head_b);
    ASSERT_NE(common, nullptr);

    EXPECT_EQ(common->val, expect_val);
}

TEST(_160, no_intersection)
{
    vector<int> nums_a = {2, 6, 4};
    vector<int> nums_b = {1, 5};
    // int pos = -1;
    // int expect_val = 2;

    LinkedList ll_a;
    ListNode *tail_a;
    ListNode *head_a = ll_a.construct_from_array(nums_a.data(), nums_a.size(), tail_a);
    LinkedList ll_b;
    ListNode *tail_b;
    ListNode *head_b = ll_b.construct_from_array(nums_b.data(), nums_b.size(), tail_b);
    // tail_b->next = ll_a.get(pos);
    
    ListNode *common = getIntersectionNode(head_a, head_b);
    ASSERT_EQ(common, nullptr);

    // EXPECT_EQ(common->val, expect_val);
}

TEST(_160, empty)
{
    // vector<int> nums_a = {2, 6, 4};
    // vector<int> nums_b = {1, 5};
    // int pos = -1;
    // int expect_val = 2;

    // LinkedList ll_a;
    // ListNode *tail_a;
    // ListNode *head_a = ll_a.construct_from_array(nums_a.data(), nums_a.size(), tail_a);
    // LinkedList ll_b;
    // ListNode *tail_b;
    // ListNode *head_b = ll_b.construct_from_array(nums_b.data(), nums_b.size(), tail_b);
    // tail_b->next = ll_a.get(pos);
    
    ListNode *common = getIntersectionNode(nullptr, nullptr);
    ASSERT_EQ(common, nullptr);

    // EXPECT_EQ(common->val, expect_val);
}