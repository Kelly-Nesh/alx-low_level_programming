#include "main.h"

/**
 * _isalpha - a function for return values 1 or 0
 * @n : is a variable integer
 * Return: value is 1 or zero
 */
int _isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') ||
		(n >= 'A' && n <= 'Z'))
		return (1);
	else
		return (0);
}
