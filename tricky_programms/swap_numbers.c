#include <stdio.h>

void swap (int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main (void)
{
    int num1, num2;
    
    printf ("Enter two numbers\n");
    scanf ("%d %d", &num1, &num2);
    
    printf ("Numbers before swapping\nnum1 = %d\tnum2 = %d\n", num1, num2);
    
    swap (&num1, &num2);
    
    printf ("Numbers after swapping\nnum1 = %d\tnum2 = %d\n", num1, num2);
    
    return 0;
}
