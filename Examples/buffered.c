#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    
    for (i = 0; i < 5; i++)
    {
        // Try adding a \n
        printf("i = %d", i);
        //fflush(stdout);
        sleep(1);
    }
}

