#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list, handling loops.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *oneStep;
	size_t numNodes;
	const listint_t *twoSteps;

	oneStep = head;
	if (oneStep == NULL)
		exit(98);

	numNodes = 0;
	while (oneStep != NULL)
	{
		twoSteps = oneStep;
		oneStep = oneStep->next;
		numNodes++;
		printf("[%p] %d\n", (void *)twoSteps, twoSteps->n);

		if (twoSteps < oneStep)
		{
			printf("-> [%p] %d\n", (void *)oneStep, oneStep->n);
			break;
		}
	}

	return (numNodes);
}
