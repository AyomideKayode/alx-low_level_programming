#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;
	if (low > high)
		return (-1); /* Return -1 if the value is not found in the array */

	/* Print the current subarray being searched */
	printf("Searching in array: ");
	for (i = low; i <= high; ++i)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid); /* Return the index if the value is found */

		/* Continue searching in the left half for the first occurrence */
		return (advanced_binary_recursive(array, low, mid - 1, value));
	}

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));

	/* Continue searching in the left half */
	return (advanced_binary_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - Function to initiate the recursive binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1); /* Return -1 if the array is NULL */

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
