/*******************************************************************************
printing.c

Display examples of printing with printf().
*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 10;
    int m = 100000;
    double x = 12345.6785432;
    double y = 98765.4321785;
    
    /* Print multiple values at once. */
    printf("Four values:\n");
    printf("%d, %d, %f, %f\n", n, m, x, y);
    
    /* Print with a width of 15 characters. */
    printf("\nWidth of 15:\n");
    printf("%15d\n", n);
    printf("%15d\n", m);
    printf("%15f\n", x);
    printf("%15f\n", y);
    
    /* Round the real numbers. */
    printf("\nRounding:\n");
    printf("%.2f\n", x);
    printf("%.5f\n", x);
    printf("%.2f\n", y);
    printf("%.0f\n", y);
    
    return 0;
}







