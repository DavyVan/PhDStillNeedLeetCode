#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    string word1, word2;
    while(cin >> word1 >> word2)
    {
        auto result = S.minDistance(word1, word2);

        cout << "Answer:" << result << endl;
    }
}