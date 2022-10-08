#include <stdio.h>

/**
 * main - puts least number of double digits
 * Return: zer0 for success
 */

int main(void)
{
	int i, md, ld, fd;

	for (i = 0; i < 1000; i++)
	{
		ld = ((i % 10)  + '0');
		md = (((i / 10) % 10) + '0');
		fd = (((i / 10) / 10) + '0');
		if ((fd < md) && (md < ld))
		{
			putchar(fd);
			putchar(md);
			putchar(ld);

			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
