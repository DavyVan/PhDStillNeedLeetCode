#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> flowerbed;
    int n;
    while(cin >> n)
    {
        input_vector(flowerbed);

        auto result = S.longestSubsequence(flowerbed, n);

        cout << "Answer:" << boolalpha << result << endl;
    }
}