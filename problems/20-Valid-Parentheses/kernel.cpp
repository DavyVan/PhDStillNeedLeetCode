#include "kernel.h"
#include <stdlib.h>

bool isValid(char * s)
{
    char *stack = (char*) malloc(sizeof(char) * 10001);
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
            case '(':
            case '[':
            case '{':
                stack[top++] = s[i];
                break;
            case ')':
                if (top == 0 || stack[top-1] != '(')
                {
                    free(stack);
                    return false;
                }
                else
                {
                    top--;
                }
                break;
            case ']':
                if (top == 0 || stack[top-1] != '[')
                {
                    free(stack);
                    return false;
                }
                else
                {
                    top--;
                }
                break;
            case '}':
                if (top == 0 || stack[top-1] != '{')
                {
                    free(stack);
                    return false;
                }
                else
                {
                    top--;
                }
                break;
        }
    }
    free(stack);
    if (top == 0)
        return true;
    else 
        return false;
}