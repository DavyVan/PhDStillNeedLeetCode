#include "kernel.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    string pattern;
    string s;
    cout << "Input <pattern>: ";
    while (cin >> pattern)
    {
        cout << "Input <s>: ";
        getline(cin, s);    // get the last \n
        getline(cin, s);
        cout << (Solution::wordPattern(pattern, s) ? "True" : "False") << endl;
        cout << "Input <pattern>: ";
    }
}