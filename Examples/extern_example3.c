#include <stdio.h>

static int x = 0;

void function2()
{
    printf("function: %d\n", x);
    x = 999;
    printf("function: %d\n", x);
}

