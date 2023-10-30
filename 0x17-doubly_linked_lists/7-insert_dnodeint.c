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
	unsigned int count = 1;

	new = malloc(sizeof(dlistint_t));
	if ((!new) || (!(*h) && idx > 0))
		return (NULL);
	temp = *h;
	if (!temp)
	{
		return (add_dnodeint_end(h, n));
	}
	new->n = n;
	if (idx == 0)
	{
		temp->prev = new;
		new->next = temp;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (count < idx)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		count++;
	}
	new->next = temp->next;
	temp->next = new;
	temp->next->prev = new;
	new->prev = temp;
	return (new);
}
