#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * @head: head pointer
 * @n: integer for newnode
 * Return: dlistint_t pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
	{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	new->prev = NULL;
	new->n = n;
	return (*head);
}
