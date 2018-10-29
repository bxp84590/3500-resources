#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("\e[0;34m");
    printf("Hello, is this text in blue?\n");
    printf("\e[0m");

    printf("\e[0;31m");
    printf("Hello, is this text in red?\n");
    printf("\e[0m");

    return 0;
}
