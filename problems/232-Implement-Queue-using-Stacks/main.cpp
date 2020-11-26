#include "kernel.h"
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    MyQueue *_queue = nullptr;
    string cmd;
    int arg;
    cout << "Input <cmd>: ";
    while (cin >> cmd)
    {
        if (cmd == "MyQueue")
        {
            if (_queue != nullptr)
                delete _queue;
            _queue = new MyQueue();
        }
        else if (cmd == "push")
        {
            cout << "Input <arg>: ";
            cin >> arg;
            _queue->push(arg);
        }
        else if (cmd == "pop")
        {
            cout << _queue->pop() << endl;
        }
        else if (cmd == "peek")
        {
            cout << _queue->peek() << endl;
        }
        else if (cmd == "empty")
        {
            cout << (_queue->empty() ? "True" : "False") << endl;
        }
        cout << "Input <cmd>: ";
    }
}
