#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    NaryTree* nt;
    while(nt = NaryTree::input_and_construct("N-ary tree:"))
    {
        auto result = S.postorder(nt->root);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}