#include <stdio.h>

int my_strcmp (char *str1, char * str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main (void)
{
    char str1 [10] = "aaa"; // reference
    char str2 [10] = "aaa"; // equal
    //char str2 [10] = "aaabbb"; // less
    //char str2 [10] = "a"; // greater
    
    int result;
    
    result = my_strcmp (str1, str2);
    
    if (result == 0)
        printf ("Both strings\nstr1 = %s\nstr2 = %s\n are same\n", str1, str2);
    if (result < 0)
        printf ("str1 = %s\nis less than\nstr2 = %s\n", str1, str2);
    if (result > 0)
        printf ("Str1 = %s\nis greater than\nstr2 = %s\n", str1, str2);
        
    return 0;    
}
