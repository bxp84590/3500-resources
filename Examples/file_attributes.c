#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    struct stat file_info;
    int i;
    
    if (argc != 2)
    {
        printf("Usage: statefile filename\n");
        return 0;
    }
    
    i = stat(argv[1], &file_info);
    
    if (i == -1)
    {
        printf("Unable to stat %s\n", argv[1]);
        return 0;
    }
    
    printf("size: %ld\n", file_info.st_size);
    printf("permissions: %d\n", file_info.st_mode);
    
    // Print bits of permissions
    for (i = 9; i >= 0; i--)
    {
        if (file_info.st_mode & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    
    printf("last modified: %ld\n", file_info.st_mtime);
}

