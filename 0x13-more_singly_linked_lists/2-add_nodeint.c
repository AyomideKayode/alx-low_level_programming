#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer of the head node of the list.
 * @n: Data to add to the new node.
 *
 * Return: Address of the new element (new node), or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* Create a new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set the value of the new node */

	new_node->next = *head; /* Link new node to point to the head node */
	*head = new_node; /* Update head pointer to point to the new node */

	return (new_node); /* Return the address of the new node */
}
