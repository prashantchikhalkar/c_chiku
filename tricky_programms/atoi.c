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
	if (*str == NULL)
		return 0;

	int res = 0;
	int sign = 1;
	int i = 0;

	if (str [0] == '-') {
		sign = -1;
		i++;
	}
	for (; str [i] != '\0'; ++i)
		res = res * 10 + str [i] - '0';

	return sign * res;	
}

int main (void)
{
	char str [SIZE] = "-123";
	//char str [SIZE] = "\0";
	int val = myAtoi (str);
	printf ("%d ", val);
	printf ("\n");

	return 0;
}
