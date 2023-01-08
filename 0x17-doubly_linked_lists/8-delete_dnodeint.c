#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cnt;
	dlistint_t *hd, *prev_nd, *nxt_nd;

	hd = *head;
	cnt = 0;

	if (!hd)
		return (-1);

	while (cnt < index)
	{
		if ((hd == NULL) && (cnt != index))
			return (-1);
		hd = hd->next;
		cnt++;
	}
	if ((hd->next) && (hd->prev))
	{
		(hd->next)->prev = hd->prev;
		(hd->prev)->next = hd->next;
	}

	else if ((hd->next) && !(hd->prev))
	{
		(hd->next)->prev = NULL;
		*head = (hd->next);
	}
	else if (!(hd->next) && (hd->prev))
	{
		(hd->prev)->next = NULL;
	}
	else if (!(hd->next) && !(hd->prev))
	{
		printf("\t\t\tDeleted %d\n------------------------\n", hd->n);
		free(hd);
	}
	return (1);
}