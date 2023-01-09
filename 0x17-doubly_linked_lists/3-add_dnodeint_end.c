#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - prints elements of a dlist linked list
 * @head: pointer to the first node
 * @n: integer value for the new node
 * Return: NULL if failed or head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *hd;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head)
	{
		hd = *head;
		while (hd->next)
		{
			hd = hd->next;
		}
		new->prev = hd;
		hd->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	new->next = NULL;
	new->n = n;

	return (*head);
}
