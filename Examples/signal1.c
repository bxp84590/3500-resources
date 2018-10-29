#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void f(int signum)
{
    printf("You can't divide by zero!\n");
    printf("SIGFPE = %d\n", signum);
    exit(SIGFPE);
}

int main(int argc, char *argv[])
{
    int i;
    
    signal(SIGFPE, f);
    
    for (i = -3; i <= 3; i++)
    {
        printf("%d\n", 12 / i);
    }
    
    return 0;
}

