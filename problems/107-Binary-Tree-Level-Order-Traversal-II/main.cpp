#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input <# of nodes>: ");
    while (scanf("%d", &size))
    {
        int *nodes = (int*) malloc(sizeof(int) * size);
        printf("Input <nodes>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nodes[i]);
        
        BinaryTree tree;
        TreeNode *root = tree.construct_from_level_order_array(nodes, size);

        vector<vector<int>> ret = Solution::levelOrderBottom(root);

        for (vector<vector<int>>::iterator it = ret.begin(); it < ret.end(); it++)
        {
            vector<int> current = *it;
            for (vector<int>::iterator iit = current.begin(); iit < current.end(); iit++)
                printf("%d ", *iit);
            printf("\n");
        }
        printf("Input <# of nodes>: ");
    }
    
}