#include <stdio.h>

int OurSquareRoot(int n)
{
    if (n == 4)
    {
        return 2;
    }
    else
    {
        printf("I don't know how to compute the square root of %d\n", n);
        
        return -1;
    }
}

