/*******************************************************************************
basc_input.c

Basic usage of scanf().
*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int number1;
    int number2;
    int sum;
    
    printf("Enter an integer: ");
    scanf("%d", &number1);
    
    printf("Enter another integer: ");
    scanf("%d", &number2);
    
    sum = number1 + number2;
    
    printf("Sum is: %d\n", sum);

    return 0;
}
