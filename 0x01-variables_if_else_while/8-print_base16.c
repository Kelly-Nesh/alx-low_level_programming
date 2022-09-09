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
for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
for (atoz = 'a'; atoz <= 'f'; atoz++)
	putchar(atoz);
putchar('\n');
return (0);
}

