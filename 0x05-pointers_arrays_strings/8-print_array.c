#include "main.h"
#include <stdio.h>

/**
 * print_array - prints no of elmnts of an
 * array of ints
 * @a: the array of ints
 * @n: number of elmnt
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
