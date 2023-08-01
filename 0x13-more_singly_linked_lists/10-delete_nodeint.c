#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in the list.
 * @head: Pointer to the pointer of the head node of the list.
 * @index: Index of the position where the node should be deleted(starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL) /* Check if the linked list is empty */
		return (-1);

	current_node = *head;
	/* prev_node = NULL;*/

	for (i = 0; i < index && current_node != NULL; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL) /* If the index is out of range */
		return (-1);

	if (prev_node == NULL) /* If the node to delete is the head node */
		*head = current_node->next;
	else
		prev_node->next = current_node->next;

	free(current_node); /* Free the memory of the deleted node */

	return (1); /* Return 1 to indicate success */
}
