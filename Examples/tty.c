#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fpt;
    
    // Find out current tty with tty UNIX command
    fpt = fopen("/dev/pts/1", "w");

    if (fpt == NULL)
    {
        printf("Error: Cannot write to terminal.\n");
    }
    
    fprintf(fpt, "Hello terminal.\n");
    
    fclose(fpt);
    
    return 0;
}

