#include <stdio.h>
#include <string.h>

void my_strrev (char *str, int length)
{
    int i;
    char temp;
    
    for (i = 0; i <= length/2; i++)
    {
        temp = str [i];
        str [i] = str [length - i];
        str [length - i] = temp;
    }
}

int my_strlen (const char *str)
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
    int length;
    
    //length = my_strlen (str);
    length = strlen (str);
    
    printf ("Given string = %s\n", str);
    printf ("length of string = %d\n", length);
    
    my_strrev (str, length);
    printf ("Reverse of string = %s\n", str);
    
    return 0;
    
}
