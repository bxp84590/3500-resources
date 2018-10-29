#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char program[80];
    char *args[3];
    int i;
    
    printf("Ready to exec()...\n");
    strcpy(program, "date");
    args[0] = "date";
    args[1] = "-u";
    args[2] = NULL;
    
    i = execvp(program, args);
    
    printf("i = %d ... did it work?\n", i);
        
    return 0;
}

