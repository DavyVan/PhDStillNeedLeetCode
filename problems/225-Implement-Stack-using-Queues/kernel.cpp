#include "kernel.h"

MyStack::MyStack()
{

}

void MyStack::push(int x)
{
    if (pop_able)
        pop_queue.push(x);
    else
        push_queue.push(x);
}

int MyStack::pop()
{
    queue<int> *from, *to;
    if (pop_able)
    {
        from = &pop_queue;
        to = &push_queue;
    }
    else 
    {
        from = &push_queue;
        to = &pop_queue;
    }

    while (from->size() > 1)
    {
        to->push(from->front());
        from->pop();
    }

    int t = from->front();
    from->pop();
    pop_able = !pop_able;
    return t;
}

int MyStack::top()
{
    queue<int> *from, *to;
    if (pop_able)
    {
        from = &pop_queue;
        to = &push_queue;
    }
    else 
    {
        from = &push_queue;
        to = &pop_queue;
    }

    while (from->size() > 1)
    {
        to->push(from->front());
        from->pop();
    }

    int t = from->front();
    to->push(t);
    from->pop();
    pop_able = !pop_able;
    return t;
}

bool MyStack::empty()
{
    if (pop_able)
        return pop_queue.empty();
    else
        return push_queue.empty();
}