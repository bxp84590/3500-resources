#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

int running;

void f(int signum)
{
    printf("Child received a frog!\n");
    
    running = 0;
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    char text[80];
    
    i = fork();
    
    if (i == 0)
    {
        signal(SIGUSR1, f);
        printf("Child waiting...\n");
        running = 1;
        
        while (running == 1)
        {
            sleep(1);
        }

        printf("Child stopped\n");
    }
    else
    {
        while (1)
        {
            sleep(1);
            printf("Command? ");
            scanf("%s", text);
            
            if (strcmp(text, "frog") == 0)
            {
                kill(i, SIGUSR1);
            }
            
            if (strcmp(text, "quit") == 0)
            {
                break;
            }
        }
    }
    
    return 0;
}

