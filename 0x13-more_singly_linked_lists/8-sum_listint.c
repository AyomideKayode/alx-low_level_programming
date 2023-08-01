#include "lists.h"
/**
 * sum_listint - Returns the sum of all data in a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The sum of all data values in the linked list,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL) /* Traverse the linked list */
	{
		sum += head->n; /* Add data value of current node to the sum */
		head = head->next; /* Move to the next node */
	}

	return (sum); /* Return the sum of all data values in linked list */
}
