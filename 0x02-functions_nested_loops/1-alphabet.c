#include "main.h"

/**
 * print_alphabet - prints alphabets
 * using variable a to z
 * no return value specified
 * /

void print_alphabet(void)
{
char atoz;
for(atoz = 'a'; atoz <= 'z'; atoz++)
	_putchar(atoz);
_putchar('\n');
}
