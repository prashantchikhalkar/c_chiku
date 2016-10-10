/**
 *  @file  :  factorial_using_recursion.c
 *
 *
 **/ 
 
 #include <stdio.h>

int factorial (int);

int factorial (int num)
{
    if (num <= 1) {
        return 1;
    } else { 
        return num * factorial (num -1);
    }
}

int main (void)
{
    int num, result;
    
    printf ("Enter a number\n");
    scanf ("%d", &num);
    
    result = factorial (num);
    
    printf ("The factorial of %d is %u\n", num, result);
    
    return 0;
}
