#include "lists.h"

/**
 * free_listint2 - Frees linked list of type listint_t, and sets head to NULL.
 * @head: Pointer to the pointer of the head node of the linked list.
 *
 * Return: nothing (void).
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	/* Check if the pointer to the head is NULL (no list) */
	if (head == NULL)
		return;

	while (*head != NULL) /* Iterate through the linked list */
	{
		ptr = *head; /* Use ptr to keep track of the current node */
	/* Move head to the next node while ptr frees the current node */
		*head = ptr->next;
		free(ptr); /* Free the current node */
	}
	/* Set head to NULL after freeing all nodes */
	*head = NULL;
}
