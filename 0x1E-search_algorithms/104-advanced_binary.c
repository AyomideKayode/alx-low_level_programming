#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search algorithm
 * @array: Pointer to the first element of the [sub]array to search in
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high < low)
		return (-1); /* Return -1 if the value is not found in the array */

	/* Print the current subarray being searched */
	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = low + (high - low) / 2;
	/* Check if current element is target value and is the first occurrence */
	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);

	/* Adjust the search range based on the comparison with the value */
	if (array[i] >= value)
		return (advanced_binary_recursive(array, low, i, value));

	return (advanced_binary_recursive(array, i + 1, high, value));
}

/**
 * advanced_binary - Function to initiate the recursive binary search
 *  by searching for value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1); /* Return -1 if the array is NULL */

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
