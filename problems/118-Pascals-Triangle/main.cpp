#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numRows;
    printf("Input <numRows>: ");
    while (scanf("%d", &numRows))
    {
        int returnSize;
        int *returnColumnSizes = NULL;
        int **ret = generate(numRows, &returnSize, &returnColumnSizes);
        printf("generated\n");
        for (int i = 0; i < returnSize; i++)
            printf("%d ", returnColumnSizes[i]);
        printf("\n");
        fflush(stdout);
        for (int i = 0; i < returnSize; i++)
        {
            for (int j = 0; j < returnColumnSizes[i]; j++)
                printf("%d ", ret[i][j]);
            printf("\n");
        }

        // free(returnColumnSizes);
        // free(ret);
    }
}