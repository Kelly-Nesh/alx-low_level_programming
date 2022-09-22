#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if ((*(s + n) >= 97) && (*(s + n) <= 122))
			*(s + n) = *(s + n) - 32;
		n++;
	}

	return (s);
}
