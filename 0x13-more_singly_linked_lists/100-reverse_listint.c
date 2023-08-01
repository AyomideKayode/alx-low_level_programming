#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the head node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* Pointer to keep track of previous node */
	/*listint_t *current = *head; Pointer to traverse the list */

	while (*head != NULL)
	{
		listint_t *next_node = (*head)->next; /* Save the next node */

		/* Reverse the link to the previous node */
		(*head)->next = prev;

		/* Move both pointers one step forward */
		prev = *head;
		*head = next_node;
	}

	/* After the loop, 'prev' will be pointing to the new head (reversed head) */
	*head = prev;

	return (*head); /* Return a pointer to the first node of the reversed list */
}
