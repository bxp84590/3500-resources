/*******************************************************************************
output_parameters.c

Demonstrate pass by reference and output parameters.
*******************************************************************************/

#include <stdio.h>

void division(int numerator, int denominator, int *dividend, int *remainder)
{
    /* Could also use %p to print addresses in hexadecimal. */
    printf("Address of numerator: %u\n", &numerator);
    printf("Address of denominator: %u\n", &denominator);
    printf("Address of dividend: %u\n", dividend);
    printf("Address of remainder: %u\n", remainder);
    
    *dividend = numerator / denominator;
    *remainder = numerator % denominator;
}

int main(int argc, char *argv[])
{
    int x = 9;
    int y = 2;
    int d;
    int r;
    
    printf("Address of x: %u\n", &x);
    printf("Address of y: %u\n", &y);
    printf("Address of d: %u\n", &d);
    printf("Address of r: %u\n", &r);
    
    division(x, y, &d, &r);
    
    printf("%d / %d = %d r %d\n", x, y, d, r);
    
    return 0;
}

