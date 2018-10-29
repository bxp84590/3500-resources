/*******************************************************************************
ref_op.c

Demonstrate the reference operator.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int a;
    int b;
    float x;
    double y;
    char s[8];
    
    a = 5;
    b = 9;
    x = 10.9;
    y = 3.14;
    
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';
    s[5] = '\0';
    
    /* %p is a format specifier for a memory location */
    printf("a contains %d and is at %u (%p)\n", a, &a, &a);
    printf("b contains %d and is at %u (%p)\n", b, &b, &b);
    printf("x contains %.1f and is at %u (%p)\n", x, &x, &x);
    printf("y contains %.2f and is at %u (%p)\n", y, &y, &y);
    printf("s contains %s and is at %u (%p)\n", s, s, s);
    printf("s[0] is at %u (%p) and s is at %u (%p)\n", &s[0], &s[0], s, s);
    
    return 0;
}

