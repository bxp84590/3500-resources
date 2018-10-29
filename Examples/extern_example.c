
#include <stdio.h>

int x;

int main(int argc, char *argv[])
{
    x = 1;
    printf("main: %d\n", x);
    function();
    printf("main: %d\n", x);

    function2();
    printf("main: %d\n", x);
}

