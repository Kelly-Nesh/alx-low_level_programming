#include <stdio.h>
#include "main.h"
/**
 * _strlen - return string length
 * Return: int i
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return 0;
}

int _strlen(char *s)
{
	int i;
	while (*s != '\0')
	{
		*s++;
		i++;
	}
	return i;
}
