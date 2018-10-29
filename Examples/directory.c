#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *directory;
    struct dirent *entry;
    
    directory = opendir(".");
    
    if (directory == NULL)
    {
        printf("Unable to open directory .\n");
        return 0;
    }
    
    while (1)
    {
        entry = readdir(directory);
        
        if (entry == NULL)
        {
            break;
        }
        
        printf("%s\n", entry->d_name);
    }
    
    closedir(directory);
    
    return 0;
}

