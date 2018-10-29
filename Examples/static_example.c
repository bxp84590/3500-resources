#include <stdio.h>

static int sq = 0;

int summer(int x)
{
    static int sum = 0;
    
    sum = sum + x;
    sq = sq - 1;
    
    return sum;
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    for (i = 0; i < 5; i++)
    {
        sq = sq + (i * i);
        j = summer(i);
        printf("%d %d\n", j, sq);
    }
}







