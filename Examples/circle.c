#include "circle.h"

double area(double radius)
{
    return radius * radius * PI;
}

double circumference(double radius)
{
    return 2 * PI * radius;
}

double diameter(double radius)
{
    return 2 * radius;
}

