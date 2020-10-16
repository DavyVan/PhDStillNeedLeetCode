#ifndef __LINKED_LIST__
#define __LINKED_LIST__

#include <vector>
#include <stdlib.h>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

/* ------------------ The code below is written in pure C++ (for convenience) ----------------- */
class LinkedList
{
    private:
    vector<ListNode*> nodes;
    
    public:
    LinkedList(){}

    void free_nodes()
    {
        for (vector<ListNode*>::iterator it = nodes.begin(); it < nodes.end(); it++)
            free(*it);
    }

    ~LinkedList()
    {
        free_nodes();
    }

    ListNode* construct_from_array(int *array, int length, ListNode *&tail, bool head_insertion = false)
    {
        if (length == 0)
            return nullptr;
        // head
        ListNode* head = (ListNode*) malloc(sizeof(ListNode));
        head->val = array[0];
        head->next = nullptr;
        nodes.push_back(head);

        ListNode *current = head;
        for (int i = 1; i < length; i++)
        {
            ListNode* t = (ListNode*) malloc(sizeof(ListNode));
            t->val = array[i];

            if (!head_insertion)
            {
                t->next = nullptr;
                current->next = t;
                current = t;
            }
            else
            {
                t->next = head;
                head = t;
            }

            nodes.push_back(t);
        }

        tail = current;
        return head;
    }

    void add_circle(int pos)
    {
        (*(nodes.end()-1))->next = nodes[pos];
    }
};

#endif