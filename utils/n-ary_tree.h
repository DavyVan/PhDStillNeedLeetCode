#ifndef __N_ARY_TREE__
#define __N_ARY_TREE__

#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val): val(_val) {}

    Node(int _val, vector<Node*> _children): val(_val), children(_children) {}
};

/**
 * Nary-Tree input serialization is represented in their level order traversal. 
 * Each group of children is separated by the null value
 */
class NaryTree {
private:
    // internal state
    vector<Node*> nodes;
public:
    Node* root;

private:
    Node* create_node(int _val, vector<Node*> _children = {}) {
        if (_val == -1) {
            return nullptr;
        }

        Node* t = new Node(_val, _children);
        nodes.push_back(t);
        return t;
    }
public:
    NaryTree(): root(nullptr) {}

    void free_nodes() {
        nodes.clear();
    }

    ~NaryTree() {
        free_nodes();
    }

    Node* construct_from_level_order_array(vector<int> level_order_array) {
        queue<Node*> level_order_queue;

        // root
        root = create_node(level_order_array[0]);
        level_order_queue.push(root);

        int size = level_order_array.size();
        Node* current = nullptr;
        for (int i = 1; i < size; i++) {
            if (level_order_array[i] == -1) {
                current = level_order_queue.front();
                level_order_queue.pop();
            } else {
                Node* t = create_node(level_order_array[i]);
                current->children.push_back(t);
                level_order_queue.push(t);
            }
        }

        return root;
    }

    static NaryTree* input_and_construct(string prompt, istream& in = cin) {
        cout << prompt << endl;

        cout << "Input the size (including the null/-1):" << endl;
        int size;
        in >> size;

        NaryTree* ret = new NaryTree();

        // handle size == 0
        if (size == 0) {
            return ret;
        }

        vector<int> nodes(size);
        cout << "Input the nodes:" << endl;
        for (int i = 0; i < size; i++) {
            in >> nodes[i];
        }

        ret->construct_from_level_order_array(nodes);
        cout << "N-ary tree constructed." << endl;
        return ret;
    }

    void print_level_order() {
        queue<Node*> level_order_queue;
        level_order_queue.push(root);
        level_order_queue.push(new Node(-1));
        while (!level_order_queue.empty()) {
            Node* current = level_order_queue.front();
            level_order_queue.pop();
            cout << current->val << " ";
            for (auto it = current->children.begin(); it != current->children.end(); it++) {
                level_order_queue.push(*it);
            }
            level_order_queue.push(new Node(-1));
        }
        cout << endl;
    }
};

#endif // __N_ARY_TREE__