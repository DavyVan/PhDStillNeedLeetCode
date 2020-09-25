#include "utils/binary_tree.h"

bool isSymmetric(struct TreeNode* root);
bool isSymmetric_recursive(struct TreeNode* root);
bool isSymmetric_iterative(struct TreeNode* root);

class Solution
{
    public:
    static bool isSymmetric(TreeNode *root){return isSymmetric_iterative(root);}
};