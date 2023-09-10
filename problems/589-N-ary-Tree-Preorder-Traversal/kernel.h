#ifndef __589_KERNEL_H__
#define __589_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
// #include <tuple>
#include <stack>
// #include <cmath>
// #include <limits>
// #include "../../utils/binary_tree.h"
#include "../../utils/n-ary_tree.h"
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if (root == nullptr) {
            return {};
        }
        
        stack<Node*> st;
        st.push(root);

        vector<int> ret;

        while (!st.empty()) {
            Node* cur = st.top();
            st.pop();
            ret.push_back(cur->val);
            for (auto rit = cur->children.rbegin(); rit != cur->children.rend(); rit++) {
                st.push(*rit);
            }
        }
        return ret;
    }
};

#endif  // __589_KERNEL_H__