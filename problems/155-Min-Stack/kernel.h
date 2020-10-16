#include <stack>
using namespace std;

class MinStack {
private:
    stack<int> _stack;
    stack<int> _min;

public:
    /** initialize your data structure here. */
    MinStack(); 
    void push(int x);
    void pop(); 
    int top(); 
    int getMin(); 
};
