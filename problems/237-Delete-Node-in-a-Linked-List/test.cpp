#include "kernel.h"
#include <gtest/gtest.h>
#include <vector>
using namespace std;

TEST(_237, _1)
{
    vector<int> nums{4, 5, 1, 9};
    int target = 5;
    vector<int> expect{4, 1, 9};

    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums.data(), nums.size(), tail);

    ListNode* target_ptr = head;
    while (target_ptr->val != target)
        target_ptr = target_ptr->next;

    Solution::deleteNode(target_ptr);

    int i = 0;
    while (head != nullptr)
    {
        EXPECT_EQ(head->val, expect[i++]);
        head = head->next;
    }
}

TEST(_237, _2)
{
    vector<int> nums{4, 5, 1, 9};
    int target = 1;
    vector<int> expect{4, 5, 9};

    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums.data(), nums.size(), tail);

    ListNode* target_ptr = head;
    while (target_ptr->val != target)
        target_ptr = target_ptr->next;

    Solution::deleteNode(target_ptr);

    int i = 0;
    while (head != nullptr)
    {
        EXPECT_EQ(head->val, expect[i++]);
        head = head->next;
    }
}

TEST(_237, _3)
{
    vector<int> nums{1, 2, 3, 4};
    int target = 3;
    vector<int> expect{1, 2, 4};

    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums.data(), nums.size(), tail);

    ListNode* target_ptr = head;
    while (target_ptr->val != target)
        target_ptr = target_ptr->next;

    Solution::deleteNode(target_ptr);

    int i = 0;
    while (head != nullptr)
    {
        EXPECT_EQ(head->val, expect[i++]);
        head = head->next;
    }
}

TEST(_237, _4)
{
    vector<int> nums{0, 1};
    int target = 0;
    vector<int> expect{1};

    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums.data(), nums.size(), tail);

    ListNode* target_ptr = head;
    while (target_ptr->val != target)
        target_ptr = target_ptr->next;

    Solution::deleteNode(target_ptr);

    int i = 0;
    while (head != nullptr)
    {
        EXPECT_EQ(head->val, expect[i++]);
        head = head->next;
    }
}

TEST(_237, _5)
{
    vector<int> nums{-3, 5, -99};
    int target = -3;
    vector<int> expect{5, -99};

    LinkedList ll;
    ListNode* tail;
    ListNode* head = ll.construct_from_array(nums.data(), nums.size(), tail);

    ListNode* target_ptr = head;
    while (target_ptr->val != target)
        target_ptr = target_ptr->next;

    Solution::deleteNode(target_ptr);

    int i = 0;
    while (head != nullptr)
    {
        EXPECT_EQ(head->val, expect[i++]);
        head = head->next;
    }
}