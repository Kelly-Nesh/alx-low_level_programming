#include "lists.h"

/**
 * sum_dlistint - loops through a doubly liked lists
 * @head: pointer to the first node
 * Return: sum of integer values of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int count;

	count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
