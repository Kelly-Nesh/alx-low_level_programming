#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets and
 * a newline character
 * no return specified
 */

void print_alphabet_x10(void)
{
int count = 0;
char atoz;

while (count++ <= 9)
{
	for (atoz = 'a'; atoz <= 'z'; atoz++)
		_putchar(atoz);
	_putchar('\n');
}
}
