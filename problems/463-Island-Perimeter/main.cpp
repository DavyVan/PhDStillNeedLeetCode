#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<int>> grid;
    while(input_matrix(grid))
    {
        auto result = S.islandPerimeter(grid);

        cout << "Answer:" << result << endl;
    }
}