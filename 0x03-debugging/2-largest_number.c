#include "main.h"

/**
 *largest_number - three integer input function
 *@a: integer one
 *@b: integer two
 *@c: integer three
 *Return: largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a > c)
	{
		largest = a;
	}
	else if (b >= a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
