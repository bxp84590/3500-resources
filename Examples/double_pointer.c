/*******************************************************************************
double_pointer.c

Demonstrates using a double pointer.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void integers(int listsize, int **list)
{
    int i;

    printf("list = %p\n", list);
    
    *list = (int *)malloc(listsize * sizeof(int));
    
    if (*list == NULL)
    {
        printf("Allocation failed\n");
    }
    
    for (i = 0; i < listsize; i++)
    {
        (*list)[i] = 10 + i;
    }
}

int main(int argc, char *argv[])
{
    int *numbers;
    int i;

    printf("&numbers = %p\n", &numbers);
    
    integers(3, &numbers);
    
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    
    return 0;
}






