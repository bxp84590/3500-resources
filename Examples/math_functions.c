/*******************************************************************************
math_functions.c

Demonstrate various math functions.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int n = 16;
    double x = 123.456;
    
    printf("pow(%d, 2) = %f\n", n, pow(n, 2));
    printf("sqrt(%d) = %f\n", n, sqrt(n));
    printf("sqrt(%f) = %f\n", x, sqrt(x));
    printf("ceil(%f) = %f\n", x, ceil(x));
    printf("floor(%f) = %f\n", x, floor(x));

    return 0;
}





