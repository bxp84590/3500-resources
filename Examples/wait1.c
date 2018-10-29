#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    printf("Ready to fork...\n");
    
    i = fork();
    
    if (i == 0)
    {
        printf("The child executes this code.\n");
        
        for (i = 0; i < 500; i++)
        {
            j = j + i;
            printf("Child j = %d\n", j);
        }
        
        printf("Child j = %d\n", j);
    }
    else
    {
        j = wait();
        
        printf("The parent executes this code.\n");
        
        printf("Parent j = %d\n", j);
    }
        
    return 0;
}

