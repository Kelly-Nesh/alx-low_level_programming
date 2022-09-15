#include "main.h"

/**
 * print_trangle - prints a triangle
 * @sz: triangle size variable
 */

void print_triangle(int sz)
{
	int hash, ind;

	if (sz > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (ind = sz - hash; ind > 0; ind--)
				_putchar(' ');

			for (ind = 0; index < hash; ind++)
				_putchar('#')

			if (has == size)
				continue;
			
			_putchar('\n');
		}
	}
	_putchar('\n');
}
