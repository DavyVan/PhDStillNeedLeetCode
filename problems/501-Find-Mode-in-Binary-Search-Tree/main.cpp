#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    BinaryTree* bt;
    while(bt = BinaryTree::input_and_construct("BST: "))
    {
        auto result = S.findMode(bt->root);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}