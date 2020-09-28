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
        
        TreeNode *root = sortedArrayToBST(nodes, size);
        BinaryTree::print_level_order(root);
        printf("Input <# of nodes>: ");
    }
}