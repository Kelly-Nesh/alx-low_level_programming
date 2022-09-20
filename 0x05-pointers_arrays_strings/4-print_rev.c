#include "main.h"
/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = 0, n;

	while (s[n++])
		len++;

	for (n = len - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
