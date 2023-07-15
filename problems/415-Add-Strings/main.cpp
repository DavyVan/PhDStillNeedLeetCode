#include "kernel.h"
#include "../../utils/input.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    string num1, num2;
    while(cin >> num1 >> num2)
    {
        string result = s.addStrings(num1, num2);

        cout << "Answer:" << result << endl;
    }
}