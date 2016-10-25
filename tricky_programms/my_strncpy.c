#include <stdio.h>

void my_strncpy (char *dst, const char *src, int n)
{
    while (*src != '\0' && n != 0)
    {
        *dst = *src;
        dst++;
        src++;
        n--;
    }
    *dst = '\0';
}

int main (void)
{
    char src [10] = "HELLO";
    char dst [10];
    int n = 5;
    
    my_strncpy (dst, src, n);
    
    printf ("src = %s\ndst = %s\n", src, dst);
    
    return 0;
}
