#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * point
 * @dest: a buffer
 * @src: source string
 * Return: a pointer to the buffer
 */
char *_strcpy(char *dest, const char *src)
{
	int n = 0;

	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(src + n ) == '\0')
			break;
		n++;
	}
	return (dest);
}
