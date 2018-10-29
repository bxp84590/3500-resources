#include <stdio.h>

int f(int x)
{
    return x + 1;
}

int g(int x)
{
    return 2 * x;
}

void h(double x, int y, int z)
{
    printf("Result: %f\n", x + y * z);
}

int main(int argc, char *argv[])
{
    /* Create a function pointer. */
    int (*functionPtr)(int);
    
    /* Can put & in front of function name. */
    functionPtr = &f;
    
    printf("%d\n", functionPtr(5));
    
    /* But don't have to put &. */
    functionPtr = g;
    
    printf("%d\n", functionPtr(5));
    
    /* h() doesn't match the type of function functionPtr points to. */
    //functionPtr = &h;
    //printf("%d\n", functionPtr(5, 2, 3));
    
    return 0;
}

