#include <stdio.h>

int count_setbit (int num)
{
    int count = 0;
    
    while (num)
    {
        if (((num) & 1) == 1)
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
    
    printf ("Number of setbit in %d = %d\n", num, count_setbit (num));
    
    return 0;
}
