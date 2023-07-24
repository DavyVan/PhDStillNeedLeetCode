#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<int>> matrix;
    while(input_matrix(matrix))
    {
        auto result = S.minFallingPathSum(matrix);

        cout << "Answer:" << result << endl;
    }
}