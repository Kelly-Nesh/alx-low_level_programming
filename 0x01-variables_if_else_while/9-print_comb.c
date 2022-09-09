#include <stdio.h>

/**
 * main - the function to be executed
 * declare a char
 * loops and print output
 * Return:zero if successful else non-zero
 */

int main(void)
{
int num;
char atoz;
for (num = 0; num <= 9; num++)
{
	putchar((num % 10) + '0');
	if (num == 9)
		continue;
	putchar(' ');
}
putchar('\n');
return (0);
}

