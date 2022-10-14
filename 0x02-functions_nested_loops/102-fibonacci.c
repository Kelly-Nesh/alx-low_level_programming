#include <stdio.h>

/**
 * main - program entry point
 * Return: always zero
 */
int main(void)
{
	int a,b,d;
	long int c;
	a = 1;
	b = 2;
	c = 0;
	printf("%d, %d, ", a, b);
	d = 3;
	while (d <= 48)
	{
		c = a + b;
		printf("%li", c);
		if (d != 48)
			printf(", ");
		a = b;
		b = c;
		d++;
	}
	putchar('\n');

	return (0);
}
