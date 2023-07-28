#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list.
 *
 * Return: nothing(void).
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);/* Free the string data in the current node. */
		free(head); /* Free the current node. */
		head = head->next;
	}
}

/**
 * free_list - free linked list
 * @head: linked list.
 * @ptr: temporary pointer to hold next node.
 * Description: another way using temp pointer.
 * Using temporary pointer method to free list.
 *
 * Return: nothing(void)
 *
 * void free_list(list_t *head)
 * {
 *	list_t *ptr;
 *
 *	if (head == NULL) // account for no linked list
 *		return;
 *
 *	while (head != NULL) // have ptr keep track of head node and free
 *	{
 *		ptr = head;
 *		head = head->next; // move to next node while ptr frees prior
 *		free(ptr->str); // free malloced strings
 *		free(ptr);
 *	}
 * }
 */
