#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size;

    printf("Input <# of nodes>: ");
    while (scanf("%d", &size))
    {
        int *nodes = (int*) malloc(sizeof(int) * size);
        printf("Input <nodes val>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nodes[i]);
        
        BinaryTree tree;
        TreeNode *root = tree.construct_from_level_order_array(nodes, size);
        printf(isSymmetric_recursive(root) ? "True\n" : "False\n");
        printf(isSymmetric_iterative(root) ? "True\n" : "False\n");
        printf("Input <# of nodes>: ");
    }
}