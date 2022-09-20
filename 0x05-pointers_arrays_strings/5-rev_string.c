#include "main.h"

/**
 * rev_string - Reverses a sting
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, n = 0;
	char tmp;

	while (s[n++])
		len++;
	for (n = len - 1; n >= len / 2; n--)
	{
		tmp = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = tmp;
	}
}
