#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size_p, size_q;
    
    printf("Input <size p> <size q>:");
    while (scanf("%d %d", &size_p, &size_q))
    {
        printf("Input <nodes of p>... (-1 indicates null): ");
        int *nodes_p = (int*) malloc(sizeof(int) * size_p);
        for (int i = 0; i < size_p; i++)
            scanf("%d", &nodes_p[i]);
        printf("Input <nodes of q>... (-1 indicates null): ");
        int *nodes_q = (int*) malloc(sizeof(int) * size_q);
        for (int i = 0; i < size_q; i++)
            scanf("%d", &nodes_q[i]);

        BinaryTree tree_p;
        TreeNode *root_p = tree_p.construct_from_level_order_array(nodes_p, size_p);
        BinaryTree tree_q;
        TreeNode *root_q = tree_q.construct_from_level_order_array(nodes_q, size_q);
        
        printf(isSameTree(root_p, root_q) ? "True\n" : "False\n");

        free(nodes_p);
        free(nodes_q);
        printf("Input <size p> <size q>:");
    }
}