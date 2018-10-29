/*******************************************************************************
dynamic_array.c

Dynamically create an array.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int size;
    int *array;

    //printf("sizeof(char *) = %u\n", sizeof(char *));
    //printf("sizeof(int *) = %u\n", sizeof(int *));
    //printf("sizeof(double *) = %u\n", sizeof(double *));
    
    printf("Enter an array size: ");
    scanf("%d", &size);
    
    /* Traditionally not allowed in C. */
    int array2[size];
    
    array = (int *)malloc(sizeof(int) * size);
    
    if (array == NULL)
    {
        printf("Allocation failed\n");
    }
    else
    {
        printf("array at %p\n", array);
        printf("sizeof(array) = %d\n", sizeof(array));
    }
    
    int i = 0;

    for (i = 0; i < size; i++)
    {
        array[i] = i + 10;
    }


    for (i = 0; i < size; i++)
    {
        printf("%d at %p\n", array[i], &(array[i]));
    }

    free(array);
    
    printf("sizeof(array) = %d\n", sizeof(array));
    printf("sizeof(array2) = %d\n", sizeof(array2));

    return 0;
}











