#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to retrieve (0-based).
 *
 * Return: Pointer to the nth node, or NULL if the index is out of range.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int i;

	if (head == NULL) /* Check if the linked list is empty */
		return (NULL);

	nth_node = head;
	i = 0;
	/* Traverse through node while iterating to see when i becomes index */
	while (nth_node != NULL)
	{
		if (i == index) /* If desired index is found, return node */
			return (nth_node);

		nth_node = nth_node->next; /* Move to the next node */
		i++; /* Increment the index */
	}

	return (NULL); /* If the index is out of range, return NULL */
}
