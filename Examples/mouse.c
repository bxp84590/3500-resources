#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fpt;
    int c;
    int buffer[4];
    
    fpt = fopen("/dev/input/mouse0", "r");

    if (fpt == NULL)
    {
        printf("Cannot open file.\n");
        return 0;
    }
    
    while (1)
    {
        c = fread(buffer, 4, 1, fpt);
        
        printf("Read %d bytes: %d\n", c, buffer[0]);
    }
    
    fclose(fpt);
    
    return 0;
}

