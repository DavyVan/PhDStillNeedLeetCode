#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    int num;
    while(cin >> num)
    {
        auto result = S.checkPerfectNumber(num);

        cout << "Answer:" << (result ? "True" : "False") << endl;
    }
}