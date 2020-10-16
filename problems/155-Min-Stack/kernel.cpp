#include "kernel.h"
#include <exception>

MinStack::MinStack(){}

void MinStack::push(int x)
{
    if (_stack.empty())
    {
        _stack.push(x);
        _min.push(x);
    }
    else
    {
        // get current min
        int current_min = _min.top();
        _stack.push(x);
        _min.push(x < current_min ? x : current_min);
    }
    return; 
}

void MinStack::pop()
{
    if (_stack.empty())
        return;
    
    _stack.pop();
    _min.pop();
}

int MinStack::top()
{
    if (_stack.empty())
        throw "Call top() on empty stack!";
    
    return _stack.top();
}

int MinStack::getMin()
{
    if (_stack.empty())
        throw "Call getMin() on empty stack!";

    return _min.top();
}