#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<int>> mat;
    int r, c;
    while(input_matrix(mat))
    {
        cin >> r >> c;
        auto result = S.matrixReshape(mat, r, c);

        cout << "Answer:" << endl;
        output_matrix(result);
    }
}