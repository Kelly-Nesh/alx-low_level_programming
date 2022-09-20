#inlude "main.h"

/**
 * _strlen - gives length of a string
 * @str: the string to be counted
 * Return: string legth
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
