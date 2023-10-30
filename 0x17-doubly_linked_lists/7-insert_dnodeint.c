#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to a struct
 * @idx: index to insert the node
 * @n: integer value for new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if ((!new) || (!(*h) && idx > 0))
		return (NULL);
	temp = *h;
	if (!temp)
	{
		return (add_dnodeint_end(h, n));
	}
	while (1)
	{
		if (!temp && count != idx)
			return (NULL);
		temp = temp->next;
		count++;
		if (count == idx - 1)
			break;
	}
	new->next = temp->next;
	new->prev = temp->prev;
	temp->next->prev = new;
	temp->next = new;
	new->n = n;
	return (new);
}
