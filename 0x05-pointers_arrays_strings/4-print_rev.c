#include "main.h"
/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	for (c--; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
