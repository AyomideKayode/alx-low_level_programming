#include "search_algos.h"

/**
 * jump_search - Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int jump_search(int *array, size_t size, int value)
{
	int block, block_size;
	int i = 0, holder = 0;

	if (array == NULL || size == 0) /* Check if the array is NULL */
		return (-1);
	/* Calculate the block size using square root of size */
	block = sqrt((int)size);
	block_size = block;

	/* Print the initial value checked */
	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

	/* Perform the jump search */
	while (array[block] <= value && block <= (int)size - 1)
	{
		/* Break if the value is found at the current block or initial index */
		if (array[i] == value || array[block] == value)
			break;
		holder = block; /* Update holder index and print the checked value */
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block = block + block_size; /* Move to the next block */
	}

	/* Print the range where the value is found */
	printf("Value found between indexes [%d] and [%d]\n", holder, block);
	/* Linear search within the identified range */
	while (holder <= block)
	{
		/* Check for array bounds */
		if (holder >= (int)size)
			return (-1);
		/* Print the checked value */
		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

		if (array[holder] == value) /*Return the index if the value is found*/
			return (holder);
		holder++; /* Move to the next element in the range */
	}

	return (-1); /* Return -1 if the value is not found */
}
