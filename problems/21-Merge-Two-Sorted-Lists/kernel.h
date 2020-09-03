#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next = NULL;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);