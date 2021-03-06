/*******************************************************************************
out_of_bounds.c

Demonstrate array out of bounds.
*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int a[2];
    float b[3];
    double c[4];
    char d[5];

    a[0] = 5;
    b[1] = 4.0;
    c[2] = 14.7;
    d[4] = 'a';

    c[0] = 10.0;
    
    printf("c[0] = %f (%u)\n",  c[0], &c[0]);

    b[4] = 15.9;
     printf("b[4] = %f (%u)\n",  b[4], &b[4]);

    printf("c[0] = %f\n",  c[0]);

    d[0] = 'Z';
    d[1] = '\0';
    printf("%s\n", d);
    
    //b[33333] = 15.9;
    //printf("%f\n", b[33333]);
    
    return 0;
}

