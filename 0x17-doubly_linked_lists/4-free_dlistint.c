#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a doublly linked list
 * @head: pointer to first node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = (head)->next;
		free(head);
		head = new;
	}
	free(head);
}
