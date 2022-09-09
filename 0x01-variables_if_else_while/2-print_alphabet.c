#include <stdio.h>

/**
 * main - the function to be executed
 * declare a char
 * loops and print output
 * Return:zero if successful else non-zero
 */

int main(void)
{
char atoz;
for (atoz = 'a'; atoz <= 'z'; atoz++)
	putchar(atoz);
putchar('\n');
return (0);
}
