#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    
    i = getpid();
    
    printf("Parent = %d\n", i);
    
    fork();
    fork();
    
    i = getpid();
    
    printf("Who am I? %d\n", i);
        
    return 0;
}

