/*******************************************************************************
random.c

Demonstrate using random numbers.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
    srand(time(NULL));
    
    /* Range: [0, RAND_MAX] */
    int r1 = rand();
    
    /* Range: [0, 99] */
    int r2 = rand() % 100;
    
    /* Range: [1, 10] */
    int r3 = rand() % 10 + 1;
    
    printf("RAND_MAX is %d\n", RAND_MAX);
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %d\n", r3);
}

