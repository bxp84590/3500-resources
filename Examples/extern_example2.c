#include <stdio.h>

extern int x;

void function()
{
    printf("function: %d\n", x);
    x = 7;
    printf("function: %d\n", x);
}

