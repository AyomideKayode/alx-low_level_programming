#include "lists.h"

/**
 * print_listint - prints all elements of a singly linked list of integers.
 * @h: pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	/* Traverse the list and print the value of each node */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* print value of current node */

		num_nodes += 1; /* increment node count */
		h = h->next; /* move to next node */
	}

	return (num_nodes);
}
