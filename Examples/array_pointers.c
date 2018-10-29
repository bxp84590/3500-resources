/*******************************************************************************
arrays_pointers.c

Demonstrate arrays and pointers.
*******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    double array[5];
    double *d_ptr;
    double value;
    int i;
    int offset;
    
    for (i = 0; i < 5; i++)
    {
        array[i] = (double)i + 10.0;
    }
    
    d_ptr = &(array[0]);
    
    while (1)
    {
        printf("Address (Hex)\tAddress (Base 10)\tValue\n");
        
        for (i = 0; i < 5; i++)
        {
            printf("%p\t%u\t\t%lf\n", &(array[i]), &(array[i]), array[i]);
        }
        
        printf("Enter offset value (0 0 to quit): ");
        scanf("%d %lf", &offset, &value);
        
        if (offset == 0 && value == 0.0)
        {
            break;
        }
        
        if (offset < 0 || offset > 4)
        {
            printf("Offset out of bounds\n");
            continue;
        }
        
        /* Several equivalent ways of setting the value */
        array[offset] = value;
        offset[array] = value;
        *(d_ptr + offset) = value;
        *(array + offset) = value;
        
        /* Trying to assign a value to an array variable gives error. */
        //array = d_ptr;
        /* Other way, no problem. */
        //d_ptr = array;
    }
    
    return 0;
}

