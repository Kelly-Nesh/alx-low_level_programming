#include "main.h"

/**
 * print_line - Drraws a line
 * @n: variable used as counter
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
