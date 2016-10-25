#include <stdio.h>

int main (void)
{
    int num;
    
    printf ("Enter a number\n");
    scanf ("%d", &num);
    
    if ((num) & 1)
        printf ("%d is odd\n", num);
    else
        printf ("%d is even\n", num);
        
    return 0;    
}
