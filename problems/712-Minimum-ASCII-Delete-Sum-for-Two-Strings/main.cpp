#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string s1, s2;
    while(cin >> s1)
    {
        cin >> s2;
        auto result = S.minimumDeleteSum(s1, s2);

        cout << "Answer:" << boolalpha << result << endl;
    }
}