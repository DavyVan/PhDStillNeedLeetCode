#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string s;
    vector<string> dict;
    while(cin >> s)
    {
        input_vector(dict);

        auto result = S.wordBreak(s, dict);

        cout << "Answer:" << boolalpha << result << endl;
    }
}