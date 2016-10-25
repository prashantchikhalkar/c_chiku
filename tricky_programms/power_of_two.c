#include <stdio.h>

int main (void)
{
    int num;
    
    printf ("Enter a number\n");
    scanf ("%d", &num);
    
    if (!(num) & (num - 1))
        printf ("power of 2\n");
    else
        printf ("not power of 2\n");
    
    return 0;    
}
