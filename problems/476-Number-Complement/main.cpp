#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    int n;
    while(cin >> n)
    {
        auto result = S.findComplement(n);

        cout << "Answer:" << result << endl;
    }
}