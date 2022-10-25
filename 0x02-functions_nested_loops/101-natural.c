#include<stdio.h>

/**
 * main - prints sum of multiples of 3 and 5 below 1024
 * Return: zero
 */

int main(void)
{
	int j, k, sum;
	int i = 0;

	sum = 0;

	while (j < 1023 && k < 1020)
	{
		j = i * 3;
		sum += j;
		printf("%d, ", j);
		k = i * 5;
		sum += k;
		printf("%d, ", k);
		i++;
	}
	printf("\n%d\n", sum);

	return (0);
}
