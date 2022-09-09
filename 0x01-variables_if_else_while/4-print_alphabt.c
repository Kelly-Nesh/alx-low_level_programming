#include <stdio.h>

/**
 * main - the function to be executed
 * declare a char
 * loops and print output
 * Return:zero if successful else non-zero
 */

int main(void)
{
char atoz = 'a';
while (atoz <= 'z')
{	
if (atoz !='e' && atoz != 'q')
putchar(atoz);
atoz++;
}
putchar('\n');
return (0);
}

