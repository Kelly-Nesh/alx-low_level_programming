#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers
 * Return: zero
 */
int main(void)
{
	int a, b, c, d;

	a = 1;
	b = 2;
	c = 0;
	d = 3;

	while (c <= 4000000)
	{
		c = a + b;
		if ( c % 2 == 0)
		{
			d += c;
		}
		a = b;
		b = c;
		d++;
	}
	printf("%d", d + 2);
	putchar('\n');

	return (0);
}
