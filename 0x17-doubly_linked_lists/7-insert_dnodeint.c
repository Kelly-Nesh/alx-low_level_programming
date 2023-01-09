#include <stdlib.h>
#include <stdio.h>
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
	unsigned int count;
	dlistint_t *new, *hd;

	hd = *h;
	count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (hd == NULL)
	{
		hd = new;
		new->prev = hd;
		new->n = n;
		new->next = NULL;

		return (new);
	}

	while (count < idx)
	{
		if ((hd == NULL) && (count != idx))
			return (NULL);
		hd = hd->next;
		count++;
	}

	new->next = hd->next;
	new->prev = hd;
	new->n = n;
	hd->next = new;

	return (new);
}
