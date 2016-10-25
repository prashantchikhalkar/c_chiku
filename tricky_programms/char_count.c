#include <stdio.h>

int main (void)
{
    char sentance [80] = "hello";
    
    int i, vovels = 0, consonants = 0, special = 0;
    
    //printf ("Enter sentance\n");
    //gets (sentance);
    
    for (i = 0; sentance [i] != '\0'; i++)
    {
        if ((sentance [i] == 'a' || sentance [i] == 'e' || sentance [i] == 'i' || sentance [i] == 'o' || sentance [i] == 'u') || 
        (sentance [i] == 'A' || sentance [i] == 'E' || sentance [i] == 'I' || sentance [i] == 'O' || sentance [i] == 'U'))
        {
            vovels = vovels + 1;
        } else {
            consonants = consonants + 1;
        }
        if (sentance [i] == '\t' || sentance [i] == '\n' || sentance [i] == '\0' || sentance [i] == ' ')
            special = special + 1;
    }
    consonants = consonants - special;
    
    printf ("Number of vovels in %s = %d\n", vovels);
    printf ("Number of consonants in %s = %d\n", consonants);
    
    return 0;
}
