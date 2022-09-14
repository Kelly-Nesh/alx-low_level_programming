#include "main.h"

/**
 * print_last_digit - prints the last digit of numbers
 * @n: bariable integer
 * Return: lastidigit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (ld);
}
