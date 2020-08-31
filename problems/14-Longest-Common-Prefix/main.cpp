#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_str;
    while (scanf("%d\n", &n_str))
    {
        char **strs = (char**) malloc(sizeof(char*)*n_str);
        for (int i = 0; i < n_str; i++)
        {
            strs[i] = (char*) malloc(sizeof(char)*1000);
            fgets(strs[i], 1000, stdin);
        }

        char *ret = longestCommonPrefix(strs, n_str);
        printf("%s\n", ret);
        free(ret);
        for (int i = 0; i < n_str; i++)
        {
            free(strs[i]);
        }
        free(strs);
    }
}