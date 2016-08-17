// C code that shows the byte representation of int, float and pointer

#include <stdio.h>

void show_mem_rep (char *, int);

void show_mem_rep (char *start, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
		printf ("%.2x\t", start [i]);
	printf ("\n");	
}

int main (void)
{
	int i = 0x01234567;
	
	show_mem_rep ((char *)&i, sizeof (i));
	getchar ();
	
	return 0;
}
