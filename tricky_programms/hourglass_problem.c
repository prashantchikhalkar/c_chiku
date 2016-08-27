/**
 *	@file	: hourglass_problem.c 
 *	@brief	: C program to solve hourglass problem.
 *
 *
 **/

#include <stdio.h>

#define ROW_SIZE  6
#define COL_SIZE  6

int main (void)
{
	int arr [ROW_SIZE] [COL_SIZE];
	int row, col;
	int sum, maxsum;
	
	printf ("Enter elements of an array :\n");
	for (row = 0; row < ROW_SIZE; row++) {
		for (col = 0; col < COL_SIZE; col++) {
			scanf ("%d", &arr [row] [col]);
		}
	}
  	for (row = 0; row < 6; row++) {
  		for (col = 0; col < 6; col++) {
  			if (col + 2 < 6 && row + 2 < 6) {
  				sum = arr [row] [col] + arr [row] [col + 1] + arr [row] [col + 2]
  					+ arr [row + 1] [col + 1]
  					+ arr [row + 2] [col] + arr [row + 2] [col + 1] + arr [row + 2] [col + 2];
  				if (sum > maxsum)
  					maxsum = sum;
  			}
  		}
  	}
  	printf ("%d\n", maxsum);
  	return 0;
}
