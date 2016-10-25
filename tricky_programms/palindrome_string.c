#include <stdio.h>

int main (void)
{
    char str [10], rev_str [10] = {'\0'};
    
    int i, length, flag = 0;
    
    printf ("Enter a string to check for palindrome\n");
    gets (str);
    printf ("Entered string = %s\n", str);
    
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf ("Length of string = %d\n", length);
    
    for (i = length - 1; i >= 0; i--)
    {
        rev_str [length - i - 1] = str [i];
    }
    
    printf ("Reverse of %s\n%s\n", str, rev_str);
    
    // check for palindrome
    for (flag = 1, i = 0; i < length; i++)
    {
        if (rev_str [i] != str [i])
            flag = 0;
    }
    if (flag == 1)
        printf ("palindrome\n");
    else
        printf ("Not a palindrome\n");
    
    return 0;    
    
}
