#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the string to be printed.
 */
void puts_half(char *str)
{
	int n = 0, len = 0, k;

	while (str[n++])
		len++;
	if ((len % 2) == 0)
		k = len / 2;
	else
		k = (len + 1) / 2;
	for (n = k; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
