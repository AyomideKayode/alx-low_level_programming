#include "main.h"
#include <stdio.h>
/**
 * print_array - prints `n` elements of an array of integers
 * @a - array of integers
 * @n - number of elements of the array to be printed
 * Description: Numbers must be seperated by commas and space
 * Numbers should be displayed in the same order they are stored in array.
 * allowed to use printf
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");

}
