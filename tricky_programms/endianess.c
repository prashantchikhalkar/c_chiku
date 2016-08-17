// c progam to check endianess of a cpu

#include <stdio.h>

int main (void)
{
	unsigned int i = 1;
	char *c = (char *) &i;
	
	if (*c)
		printf ("Little Endian\n");
	else
		printf ("Big Endian\n");
		
	getchar ();
	
	return 0;	
}
