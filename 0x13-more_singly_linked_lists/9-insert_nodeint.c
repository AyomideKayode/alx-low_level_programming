#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list
 * @head: Pointer to the pointer of the head node of the list.
 * @idx: Index of the position where new node should be added (starts at 0).
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	if (head == NULL) /* Check if the pointer to the head is NULL */
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) /* Check if memory allocation failed */
		return (NULL);

	new_node->n = n; /* Set the data value of the new node */

	if (idx == 0) /* Insert at the beginning of the list */
	{
		/* Link the new node to the current head node */
		new_node->next = *head;
		*head = new_node; /* Update head to point to the new node */
		return (new_node);
	}

	/* Traverse list to find the previous node before the desired index */
	prev_node = *head;
	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL) /* If the index is out of range */
	{
		free(new_node); /* Free memory allocated for the new node */
		return (NULL);
	}

	/* Link the new node to the node after the previous node */
	new_node->next = prev_node->next;
	/* Update the previous node to point to the new node */
	prev_node->next = new_node;

	return (new_node); /* Return the address of the new node */
}
