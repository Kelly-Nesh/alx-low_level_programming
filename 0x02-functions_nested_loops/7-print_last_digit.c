#include "main.h"

/**
 * print_ld - prints the last digit of numbers
 * @n: bariable integer
 * Return: lastidigit
 */
int print_ld(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1
	_putchar(ld + '0');

	return (ld);
}
