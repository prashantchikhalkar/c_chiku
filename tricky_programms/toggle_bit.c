#include <stdio.h>

unsigned int toggleBit (unsigned int num, int pos)
{
    num = num ^ (1 << pos);
    
    return num;
}

int main (void)
{
    unsigned int new_num, num = 5;
    int pos = 1;
    
    new_num = toggleBit (num, pos);
    
    printf ("%d after toggling bit %d becomes %d\n", num, pos, new_num);
    return 0;   
}
