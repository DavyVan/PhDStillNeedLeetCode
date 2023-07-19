#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string s;
    int k;
    while(cin >> s >> k)
    {
        auto result = S.reverseStr(s, k);

        cout << "Answer:" << result << endl;
    }
}