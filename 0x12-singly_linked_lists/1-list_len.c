#include "lists.h"

/**
 * list_len - prints length of list_t linked list.
 * @h: Pointer to the head of linked list.
 * Return: number of nodes/elements (length) in linked list.
 */

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++; /* count nodes through list iteration */
		h = h->next;
	}

	return (num_nodes); /* total number of nodes in the list */
}
