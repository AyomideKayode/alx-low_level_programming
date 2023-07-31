#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the pointer of the head node of the list.
 *
 * Return: The data (integer value) of the deleted head node
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int headNodedata;
	listint_t *tmp;

	if (*head == NULL) /* Check if the linked list is empty */
		return (0);

	tmp = *head;

	headNodedata = tmp->n; /* Save the data to return later */

	*head = tmp->next; /* Update head to the next node */
	free(tmp); /* Free the memory of the deleted head node */

	return (headNodedata); /* Return the data of the deleted head node */
}
