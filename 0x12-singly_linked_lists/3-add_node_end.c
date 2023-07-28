#include "lists.h"
/**
 * _strlen - calculate length of a string.
 * (Helper function to determine length of string to be stored in new node).
 * @str: string
 *
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - add node to end of linked list
 * @head: linked list
 * @str: data for new node
 *
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp; /* create new node */

	if (str == NULL) /* validate input */
		return (NULL);

	if (strdup(str) == NULL) /* check if malloc errored */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* malloc for new node */

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set node values */

	if (new_node->str == NULL)
	{
		free(new_node); /* free malloc up since no data is set */
		return (NULL);
	}
	new_node->len = _strlen(str);

	if (*head == NULL) /* if no list nodes, set new_node to beginning */
		*head = new_node;
	else
	{
		tmp = *head;

	/* use tmp to traverse through the list until we reach last node */
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->next = NULL;
	}

	return (new_node); /* address of the new node.*/
}
