#include "kernel.h"
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    MinStack *_stack = nullptr;
    string cmd;
    int arg;
    cout << "Input <cmd>: ";
    while (cin >> cmd)
    {
        if (cmd == "MinStack")
        {
            if (_stack != nullptr)
                delete _stack;
            _stack = new MinStack();
        }
        else if (cmd == "push")
        {
            cout << "Input <arg>: ";
            cin >> arg;
            _stack->push(arg);
        }
        else if (cmd == "pop")
            _stack->pop();
        else if (cmd == "top")
            cout << _stack->top() << endl;
        else if (cmd == "getMin")
            cout << _stack->getMin() << endl;
        cout << "Input <cmd>: ";
    }
}