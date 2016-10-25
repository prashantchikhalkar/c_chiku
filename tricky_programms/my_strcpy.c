#include <stdio.h>

void my_strcpy (char *dst, const char *src)
{
    while (*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
}

int main (void)
{
    char *src = "HELLO";
    char dst [10] = {0};
    
    printf ("Source string is = %s\n", src);
    printf ("Destination string before copying is = %s\n", dst);
    
    my_strcpy (dst, src);
    
    printf ("Destination string after copying = %s\n", dst);
    
    return 0;
    
}
