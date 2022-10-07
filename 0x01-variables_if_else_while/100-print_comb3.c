#include <stdio.h>

/**
 * main - Returns smallest double digit number
 * @i: var for looping to 100
 * @fd: first digit
 * @ld: last digit
 * Return: 0 for sucess
 */

int main(void)
{
int i, fd, ld;
for (i = 0; i < 100; i++){
	fd = ((i / 10)+ '0');
	ld = ((i % 10)+ '0');
	if (fd < ld){
	putchar(fd);
	putchar(ld);
	putchar(',');
	putchar(' ');
	}
}putchar('\n');
return (0);
}

