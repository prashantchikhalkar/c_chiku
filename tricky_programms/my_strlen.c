#include <stdio.h>

int my_strlen (const char * str)
{
    int count;
    
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main (void)
{
    char *str = "HELLO";
    
    printf ("String Length = %d\n", my_strlen (str));
    
    return 0;
}
