#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> push_stack;
    stack<int> pop_stack;
    bool isInPush = true;

    void swap_stack(stack<int> &from, stack<int> &to);

public:
    /** Initialize your data structure here. */
    MyQueue();
    
    /** Push element x to the back of queue. */
    void push(int x);
    
    /** Removes the element from in front of queue and returns that element. */
    int pop();
    
    /** Get the front element. */
    int peek();
    
    /** Returns whether the queue is empty. */
    bool empty();
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
