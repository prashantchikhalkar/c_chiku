/**
 *	@file		dynamic_mem.c
 *
 * malloc () and calloc () usage
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE		100
#define MAX_SIZE	200
#define NAME		"PRASHANT CHIKHALKAR"
#define DESCRIPTION	"Electronics Engineer, Bengalore, India."
#define POST_SCRIPT	" He is 26 years old"
int main (void)
{
	char name [100];
	char *desc;

	strcpy (name, NAME);

	// Allocate memory dynamically
	desc = malloc (SIZE * sizeof (char));

	if (desc == NULL)
	{
		printf ("ERROR : Failed to allocated memory\n");
	} else {
		strcpy (desc, DESCRIPTION);
	}
	
	// In case more memory is needed
	desc = realloc (desc, MAX_SIZE * sizeof (char));

	if (desc == NULL)
	{
		printf ("ERROR : Failed to allocated memory\n");
	} else {
		strcat (desc, POST_SCRIPT);
	}
	
	printf ("Name : %s\n", name);
	printf ("Description : %s\n", desc);

	// Good to deallocate memory
	free (desc);
}
