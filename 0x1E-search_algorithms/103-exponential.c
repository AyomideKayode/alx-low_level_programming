#include "search_algos.h"

/**
 * binary_search_mod - Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @min: Lower bound of the search range
 * @max: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int binary_search_mod(int *array, int min, int max, int value)
{
	int mid = (max + min) / 2;
	int i;

	/* Base case: if the search range is valid */
	if (min <= max)
	{
		/* Print the current subarray being searched */
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
			else
				printf("\n");
		}

		/* Check if the middle element is the target value */
		if (array[mid] > value)
			return (binary_search_mod(array, min, mid - 1, value));
		else if (array[mid] < value)
			return (binary_search_mod(array, mid + 1, max, value));
		/* Return the index if the value is found */
		return (mid);
	}
	return (-1); /* Return -1 if the value is not found in the array */
}

/**
 * exponential_search - Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int exponential_search(int *array, size_t size, int value)
{
	int i, prev;

	/* Check for edge cases: array is NULL, size is 0, */
	/* or value is smaller than the first element */
	if (!array || size == 0 || value < array[0])
		return (-1);

	/* Exponential Search loop */
	for (i = 1, prev = 1; 1; i *= 2)
	{
		/* Check if the current index is out of bounds or the value is found */
		if (i >= (int)size || array[i] >= value)
		{
			/* adjust the index to the last valid position and fix range */
			if (i >= (int)size)
				i = size - 1;
			printf("Value found between indexes [%d] and [%d]\n", prev, i);

			/* call binary_search_mod to search within the identified range */
			return (binary_search_mod(array, prev, i, value));
		}

		/* Print the checked value and update the previous index */
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		prev = i;
	}
	return (-1);
}
