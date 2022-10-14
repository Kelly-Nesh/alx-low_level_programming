#include <stdio.h>
#include "main.h"

/**
 * _strlen - called by main
 * @s: pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
