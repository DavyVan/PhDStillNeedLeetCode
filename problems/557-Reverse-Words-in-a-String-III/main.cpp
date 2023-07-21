#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string s;
    while(getline(cin, s))
    {
        auto result = S.reverseWords(s);

        cout << "Answer:" << boolalpha << result << endl;
    }
}