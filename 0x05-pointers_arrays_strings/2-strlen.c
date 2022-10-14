#include <stdio.h>
#include "main.h"


/**
 * main - gives length of a string
 * Return: string legth
 */

int _strlen(char *);
int main(void)
{
	char *str;
	int len;
	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
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
