#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<int>> pairs;
    while(input_matrix(pairs))
    {
        auto result = S.findLongestChain(pairs);

        cout << "Answer:" << result << endl;
    }
}