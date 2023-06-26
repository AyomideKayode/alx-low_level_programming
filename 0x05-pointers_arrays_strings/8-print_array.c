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

	i = 0;
	for (n--; n >= 0; n--; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
		printf("\n");
	}
}
