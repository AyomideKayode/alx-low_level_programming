#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	/* declare variables */
	int diagsum_1 = 0;
	int diagsum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++) /* iterates from 1st row to last */
	{
		i = (row * size) + row;
		diagsum_1 += a[i]; /* add value of a[i] to diagonal */
	}

	for (row = 1; row <= size; row++) /* iterates from 2nd row to last */
	{
		i = (row * size) - row;
		diagsum_2 += a[i];
	}

	printf("%d, %d\n", diagsum_1, diagsum_2);

}
