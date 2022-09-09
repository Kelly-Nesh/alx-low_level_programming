#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the function to be executed
 * decare an integer
 * use srand to seed random
 * conditionals
 * Return:zero if successful else non-zero
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is positive", n);
return (0);
}
