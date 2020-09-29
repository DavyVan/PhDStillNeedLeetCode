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

        printf("aaaa\n");
        printf("%d\n", Solution::minDepth(root));
        printf("Input <# of nodes>: ");
    }
}