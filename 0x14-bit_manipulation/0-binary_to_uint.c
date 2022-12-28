#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int cnt;
	unsigned int sum, num, rev;

	rev = cnt = sum = 0;
	cnt = strlen(b) - 1;
	while (cnt >= 0)
	{
		if (b[cnt] == '1')
			num = 1;
		else if (b[cnt] == '0')
			num = 0;
		else
			return (0);
		if (rev == 0)
		{
			sum += num;
			rev++;
			cnt--;
			continue;
		}
		sum += num * (2 << rev - 1);
		rev++;
		cnt--;
	}
	return (sum);
}
