#include <stdio.h>

unsigned int count_resetbit (int num)
{
    int count = 0;
    
    while (num)
    {
        if ( ( (num) & 1) == 0)
            count++;
            num = num >> 1;
    }
    return count;
}

int main (void)
{
    int num;
    
    printf ("Enter a number\n");
    scanf ("%d", &num);
    
    printf ("Number of reset bit in %d = %d\n", num, count_resetbit (num));
    
    return 0;
}
