#include "main.h"

/**
 * _isupper - checks for uupercase letters
 * @ch: The character variable
 * Return: one if upper 0 toherwise
 */
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
