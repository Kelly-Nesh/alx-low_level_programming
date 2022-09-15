#include "main.h"

/**
 * _isdigit - Checks for digits 0-9
 * @n: variable integer
 * Return: 1if digit 0 else
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
