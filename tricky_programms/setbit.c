#include <stdio.h>

int setbit (int num, int pos)
{
    num = num | 1 << pos;
    
    return num;
}

int main (void)
{
    int num, new_num, pos;
    
    printf ("Enter a number\n");
    scanf ("%d", &num);
    
    printf ("Enter position\n");
    scanf ("%d", &pos);
    
    printf ("number before setting a bit = %d\n", num);
    
    new_num = setbit (num, pos);
    
    printf ("Number %d after seting %d bit becomes %d\n", num, pos, new_num);
    
    return 0;
}
