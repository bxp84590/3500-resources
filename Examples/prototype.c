/*******************************************************************************
prototype.c

Demonstrate a function prototype.
*******************************************************************************/

#include <stdio.h>

/* Function prototype */
int funct(int x);

// Could also be like:
// int funct(int);

int main(int argc, char* argv[])
{
    int x = 100;
    
    printf("funct(%d) = %d\n", x, funct(x));
}

/* Function definition */
int funct(int x)
{
    return 5 * x;
}
