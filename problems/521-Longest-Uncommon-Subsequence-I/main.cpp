#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string a, b;
    while(cin >> a >> b)
    {
        auto result = S.findLUSlength(a, b);

        cout << "Answer:" << result << endl;
    }
}