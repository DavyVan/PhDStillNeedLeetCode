#include "kernel.h"

void MyQueue::swap_stack(stack<int> &from, stack<int> &to)
{
    int t;
    while (!from.empty())
    {
        t = from.top();
        from.pop();
        to.push(t);
    }
}

MyQueue::MyQueue(){}

void MyQueue::push(int x)
{
    if (!isInPush)
    {
        swap_stack(pop_stack, push_stack);
        isInPush = true;
    }

    push_stack.push(x);
}
    

int MyQueue::pop()
{
    if (isInPush)
    {
        swap_stack(push_stack, pop_stack);
        isInPush = false;
    }

    int ret = pop_stack.top();
    pop_stack.pop();
    return ret;
}

int MyQueue::peek()
{
    if (isInPush)
    {
        swap_stack(push_stack, pop_stack);
        isInPush = false;
    }

    return pop_stack.top();
}

bool MyQueue::empty()
{
    return push_stack.empty() && pop_stack.empty();
}