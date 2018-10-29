/*******************************************************************************
prototype.c

Demonstrate a function prototype.
*******************************************************************************/

#include <stdio.h>

#include "circle.h"

int main(int argc, char* argv[])
{
    double x = 100;
    
    printf("area(%f) = %f\n", x, area(x));
}

