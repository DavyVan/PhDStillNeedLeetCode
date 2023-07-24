#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<char>> matrix;
    while(input_matrix(matrix))
    {
        auto result = S.maximalSquare(matrix);

        cout << "Answer:" << result << endl;
    }
}