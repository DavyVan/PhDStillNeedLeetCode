#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> g;
    vector<int> s;
    while(input_vector(g))
    {
        input_vector(s);

        int result = S.findContentChildren(g, s);

        cout << "Answer:" << result << endl;
    }
}