#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size, sum;
    printf("Input <# of nodes> <sum>: ");
    while (scanf("%d %d", &size, &sum))
    {
        int *nodes = (int*) malloc(sizeof(int) * size);
        printf("Input <nodes>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nodes[i]);

        BinaryTree tree;
        TreeNode *root = tree.construct_from_level_order_array(nodes, size);

        printf(Solution::hasPathSum(root, sum) ? "True\n" : "False\n");
        printf("Input <# of nodes>: ");
    }
}