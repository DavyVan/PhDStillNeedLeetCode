#include "kernel.h"
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    MyStack *_stack = nullptr;
    string cmd;
    int arg;
    cout << "Input <cmd>: ";
    while (cin >> cmd)
    {
        if (cmd == "MyStack")
        {
            if (_stack != nullptr)
                delete _stack;
            _stack = new MyStack();
        }
        else if (cmd == "push")
        {
            cout << "Input <arg>: ";
            cin >> arg;
            _stack->push(arg);
        }
        else if (cmd == "pop")
        {
            cout << _stack->pop() << endl;
        }
        else if (cmd == "top")
        {
            cout << _stack->top() << endl;
        }
        else if (cmd == "empty")
        {
            cout << (_stack->empty() ? "True" : "False") << endl;
        }
        cout << "Input <cmd>: ";
    }
}