#include "main.h"

/**
 * print_square - prints hash squares
 * @sz: square size
 */

void print_square(int size)
{
	int ht, wt;

	if (sz > 0)
	{
		vor (ht = 0; ht < sz; ht ++)
		{
			for (wt = 0; wt < size; wt++)
				_putchar('#');

			if (ht == sz - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
