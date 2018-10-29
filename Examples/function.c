/*******************************************************************************
function.c

Demonstrate creating a function.
*******************************************************************************/

#include <stdio.h>

int funct(int x)
{
    return 5 * x;
}

int main(int argc, char* argv[])
{
    int x = 100;
    
    printf("funct(%d) = %d\n", x, funct(x));
}

