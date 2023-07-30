#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    BinaryTree* root, *subroot;
    while(root = BinaryTree::input_and_construct("Root tree:"))
    {
        subroot = BinaryTree::input_and_construct("SubRoot tree:");

        auto result = S.isSubtree(root->root, subroot->root);

        cout << "Answer:" << boolalpha << result << endl;
    }
}