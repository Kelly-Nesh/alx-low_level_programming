#include<stdio.h>

/**
 * main - prints sum of multiples of 3 and 5 below 1024
 * Return: zero
 */
int main(void)
{   
    int i,j,k,sum;
    i=0;
    sum = 0;

    for (i=0; j < 1023; i++)
    {
        j = i*3;
        sum += j;
        printf("%d, ", j);
    }
    for (i=0; k < 1020; i++)
    {
        k = i*5;
        sum += k;
        printf("%d, ", k);
    }
    printf("\n%d\n", sum);
    
    return (0);
}
