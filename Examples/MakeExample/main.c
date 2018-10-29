#include <stdio.h>

int OurSquareRoot(int);

int main(int argc, char *argv[])
{
    int x;
    int s;

    printf("Hello\n");
    
    printf("Enter any integer: ");
    scanf("%d", &x);
    
    s = OurSquareRoot(x);
    
    if (s != -1)
    {
        printf("Square root of %d is %d\n", x, s);
    }
}

