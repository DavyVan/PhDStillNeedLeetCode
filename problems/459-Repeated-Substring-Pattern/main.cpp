#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string s;
    while(cin >> s)
    {
        bool result = S.repeatedSubstringPattern(s);

        cout << "Answer:" << (result ? "True" : "False") << endl;
    }
}