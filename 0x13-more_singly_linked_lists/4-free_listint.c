#include "lists.h"

/**
 * free_listint - Frees a linked list of type listint_t.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: nothing (void).
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL) /* Check if the linked list is empty */
		return;

	while (head != NULL) /* Iterate through the linked list */
	{
		ptr = head; /* Use ptr to keep track of the current node */
		/* Move head to next node while ptr frees the current node */
		head = head->next;
		free(ptr); /* Free the current node */
	}
}
