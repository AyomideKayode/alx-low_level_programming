#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer of the head node of linked list
 * @n: data to add to new node.
 *
 * Return: address of new element, or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *temp;

	/* create new node and set values */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set value for new node */
	new_node->next = NULL; /* Initialize next pointer to NULL */

	if (*head == NULL) /* point head to new node if list is empty  */
		*head = new_node;
	else
	{
		temp = *head; /* set temp ptr to iterate w/o moving head ptr */

		while (temp->next != NULL) /* iterate till last node */
			temp = temp->next;
		temp->next = new_node; /* link last node to new node */
	}

	return (new_node);
}
