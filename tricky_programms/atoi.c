/**
 *
 *
 *
 **/

#include <stdio.h>

#define SIZE	10

int myAtoi (char *str);

int myAtoi (char *str)
{
	int res = 0;
	int i;

	for (i = 0; str [i] != '\0'; ++i)
		res = res * 10 + str [i] - '0';

	return res;	
}

int main (void)
{
	char str [SIZE] = "123459876";
	int val = myAtoi (str);
	printf ("%d ", val);
	printf ("\n");

	return 0;
}
