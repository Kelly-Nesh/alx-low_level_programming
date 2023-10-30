#include <string.h>
#include "lists.h"

/**
 * dlistint_len -  loops through the linked list
 * @h: the head pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
