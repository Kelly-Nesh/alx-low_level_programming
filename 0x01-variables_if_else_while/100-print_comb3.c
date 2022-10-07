#include <stdio.h>

/**
 * main - Returns smallest double digit number
 * Return: zer0 for sucess
 */

int main(void)
{
int i, fd, ld;

for (i = 0; i < 100; i++)
{
	fd = ((i / 10) + '0');
	ld = ((i % 10) + '0');
	if (fd < ld)
	{
	fd = putchar(fd);
	ld = putchar(ld);
	if (i < 89)
	{
	putchar(',');
	putchar(' ');
	}
	}
}
putchar('\n');
return (0);
}
