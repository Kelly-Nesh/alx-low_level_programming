#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, coun = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (coun >= 0)
	{
		*(dest + count) = *(src + coun);
		if (*(src + coun) == '\0')
			break;
		count++;
		coun++;
	}
	return (dest);
}
