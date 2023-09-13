#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<int>> ops;
    int m,n;
    while(cin >> m >> n)
    {
        input_matrix(ops);

        auto result = S.maxCount(m, n, ops);

        cout << "Answer:" << result << endl;
    }
}