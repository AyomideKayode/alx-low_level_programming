#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order
 * using the Bubble Sort.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* initialize swapped flag to 0 */
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap the elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;			  /* Set the swapped flag to 1 */
				print_array(array, size); /* Print the array after each swap */
			}
		}
		/* If no two elements were swapped in this pass,*/
		/* the array is already sorted. */
		if (!swapped)
		{
			break;
		}
	}
}
