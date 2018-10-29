#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fpt;
    char byte;
    long int where;
    long int move;
    
    if (argc != 2)
    {
        printf("Usage: fileseek filename\n");
        return 0;
    }
    
    if ((fpt = fopen(argv[1], "r")) == NULL)
    {
        printf("Unable to open %s for reading\n", argv[1]);
        return 0;
    }
    
    while (1)
    {
        where = ftell(fpt);
        fread(&byte, 1, 1, fpt);
        // Go back 1 byte
        fseek(fpt, -1, SEEK_CUR);
        printf("Byte %ld: %d (%c)\n", where, byte, byte);
        printf("Enter #bytes (+ or -) to move or 0 to quit: ");
        scanf("%ld", &move);
        
        if (move == 0)
        {
            break;
        }
        fseek(fpt, move, SEEK_CUR);
    }
    
    fclose(fpt);
}

