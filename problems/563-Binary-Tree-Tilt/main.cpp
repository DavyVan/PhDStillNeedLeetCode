#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    BinaryTree* bst;
    while(bst = BinaryTree::input_and_construct("Binary tree:"))
    {
        auto result = S.findTilt(bst->root);

        cout << "Answer:" << result << endl;
    }
}