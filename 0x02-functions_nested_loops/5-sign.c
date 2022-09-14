#include "main.h"

/**
 * prnt_sgn - prints the sign of a number
 * @n: where the sign will come from
 * Return: 0, -1, or 1 depending on condition
 */

int prnt_sgn(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
