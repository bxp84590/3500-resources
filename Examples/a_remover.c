/*******************************************************************************
a_remover.c

Removes all occurrences of 'a' from as string.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;
    char string[80];
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    while (string[i] != '\0')
    {
        if (string[i] != 'a')
        {
            string[j] = string[i];
            j++;
        }
        
        i++;
    }
    string[j] = '\0';
    
    printf("Result: %s\n", string);
    
    return 0;
}

