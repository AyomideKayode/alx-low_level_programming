#include "lists.h"

/**
 * listint_len - prints length of listint_t linked list.
 * @h: Pointer to the head of linked list.
 *
 * Return: number of elements(length) in linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++; /* count nodes through list iteration */
		h = h->next;
	}

	return (num_nodes); /* total number of nodes in the list */
}

