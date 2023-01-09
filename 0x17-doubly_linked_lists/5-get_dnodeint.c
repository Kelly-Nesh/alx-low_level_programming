#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - finds node at given index
 * @index: number of index to be returned from the list
 * @head: pointer to the first node
 * Return: node at given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (count < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
