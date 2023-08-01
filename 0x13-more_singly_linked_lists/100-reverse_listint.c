#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the head node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev; /* Pointer to keep track of previous node */
	listint_t *next_node; /* Pointer to kepp track of next node */

	if (head == NULL || *head == NULL)
		return (NULL);

	/* Traverse through list to reverse the linking */
	prev = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next; /* Save the next node */
		/* Reverse the link to the previous node */
		(*head)->next = prev;

		/* Move both pointers one step forward */
		prev = *head; /* prev node updated to be cyrrent node */
		*head = next_node; /* move current node to next node*/
	}

	/* After the loop, 'prev' will be pointing to the new head (reversed head) */
	*head = prev;

	return (*head); /* Return pointer to first node of reversed list */
}
