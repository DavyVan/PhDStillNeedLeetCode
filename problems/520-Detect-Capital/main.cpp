#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string word;
    while(cin >> word)
    {
        auto result = S.detectCapitalUse(word);

        cout << "Answer:" << (result ? "True" : "False") << endl;
    }
}