#ifndef __BINARY_TREE__
#define __BINARY_TREE__

#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/* ------------------ The code below is written in pure C++ (for convenience) ----------------- */

class BinaryTree
{
private:
    // internal state
    vector<TreeNode*> nodes;
public:
    TreeNode* root;

    BinaryTree(): root(nullptr) {}

    void free_nodes()
    {
        for (vector<TreeNode*>::iterator it = nodes.begin(); it < nodes.end(); it++)
            free(*it);
    }

    ~BinaryTree()
    {
        free_nodes();
    }

    TreeNode* create_node(int val, TreeNode *left = nullptr, TreeNode *right = nullptr)
    {
        if (val == -1)
            return nullptr;
        
        TreeNode *t = (TreeNode*) malloc(sizeof(TreeNode));
        t->val = val;
        t->left = left;
        t->right = right;
        nodes.push_back(t);
        return t;
    }

    TreeNode* construct_from_level_order_array(int *level_order_array, int length)
    {
        queue<TreeNode*> level_order_queue;

        // root
        root = create_node(level_order_array[0]);
        level_order_queue.push(root);

        for (int i = 1; i < length; i++)
        {
            TreeNode *current = level_order_queue.front();

            if (i % 2 == 1)     // if left
            {
                current->left = create_node(level_order_array[i]);
                if (current->left != nullptr)
                    level_order_queue.push(current->left);
            }
            else
            {
                // if right
                current->right = create_node(level_order_array[i]);
                if (current->right != nullptr)
                    level_order_queue.push(current->right);
                level_order_queue.pop();
            }
            
        }
        return root;
    }

    /***
     * @brief Handle user input (leetcode style) and construct a binary tree.
     * Handle multiple trees at caller.
     * 
     * @param prompt 
     * @return TreeNode* The root.
     */
    static BinaryTree* input_and_construct(string prompt, istream& in = cin) {
        cout << prompt << endl;

        cout << "Input the size:" << endl;
        int size;
        in >> size;

        // handle size == 0
        if (size == 0)
        {
            return new BinaryTree();
        }

        int *nodes = (int*) malloc(sizeof(int) * size);
        cout << "Input the nodes:" << endl;
        for (int i = 0; i < size; i++) {
            in >> nodes[i];
        }

        BinaryTree* ret = new BinaryTree();
        ret->construct_from_level_order_array(nodes, size);

        free(nodes);
        return ret;
    }

    static void print_level_order(TreeNode *root)
    {
        queue<TreeNode*> level_order_queue;
        level_order_queue.push(root);
        while (!level_order_queue.empty())
        {
            TreeNode *current = level_order_queue.front();
            if (current == nullptr)
                printf("null, ");
            else
            {
                printf("%d, ", current->val);
                level_order_queue.push(current->left);
                level_order_queue.push(current->right);
            }
            level_order_queue.pop();
        }
        printf("\n");
    }
};

#endif  // __BINARY_TREE__