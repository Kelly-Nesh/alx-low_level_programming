#include "main.h"

/**
 * print_square - prints hash squares
 * @sz: square size
 */

void print_square(int sz)
{
	int ht, wt;

	if (sz > 0)
	{
		for (ht = 0; ht < sz; ht++)
		{
			for (wt = 0; wt < sz; wt++)
				_putchar('#');

			if (ht == sz - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
