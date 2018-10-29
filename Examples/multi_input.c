/*******************************************************************************
multi_input.c

Getting multiple values with scanf().
*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int x;
    int y;
    int z;
    int sum;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    
    sum = x + y + z;
    
    printf("Sum is: %d\n", sum);
}

