#include <stdio.h>

/**
 * main - Entry point
 * description: prints the sizes of respective data types
 * Return: 0 if the program is successful else; non-zero value
 */
int main(void)

{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
