#include "main.h"

/**
 * print_triangle - prints a triangle
 * @sz: triangle size variable
 */

void print_triangle(int sz)
{
	int hash, ind;

	if (sz > 0)
	{
		for (hash = 1; hash <= sz; hash++)
		{
			for (ind = sz - hash; ind > 0; ind--)
				_putchar(' ');

			for (ind = 0; ind < hash; ind++)
				_putchar('#')

			if (hash == sz)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
