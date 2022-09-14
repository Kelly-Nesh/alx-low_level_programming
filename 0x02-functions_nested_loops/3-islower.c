#include "main.h"

/**
 * _islower - using n prints lowecase alphabets
 * Return: 0 or zero
 * due to the if else conditional
 * @n : uses variable n which is an integer
 */

int _islower(int n)
{
if (n >= 'a' && n <= 'z')
	return (1);
else
	return (0);
}
