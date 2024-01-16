#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	/* Check if the list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);
	/* Determine the jump size using square root of the size */
	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		/* Save the current node as the previous node */
		prev = list;
		k++;
		index = k * m;
		/* Move to the next block until the end of the list */
		/* or the index is reached */
		while (list->next && list->index < index)
			list = list->next;
		/* Adjust the index if the last block is reached */
		if (list->next == NULL && index != list->index)
			index = list->index;
		/* Print the checked value at the current index */
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);

	/* Print the range where the value is found */
	printf("Value found between indexes [%d] and [%d]\n",
				(int)prev->index, (int)list->index);
	/* Linear search within the identified range */
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		/*  Print the checked value at the current index */
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);

		if (prev->n == value) /*  Return the node if the value is found */
			return (prev);
	}
	return (NULL); /* Return NULL if the value is not found */
}
