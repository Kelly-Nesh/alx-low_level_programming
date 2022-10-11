#include <stdio.h>

/**
 * print_times_table - prints times talble for nine
 * Return: zer0
 */

void print_times_table(int n);

int main(void)
{
    print_times_table(3);
    putchar('\n');

    print_times_table(5);
    putchar('\n');

    print_times_table(98);
    putchar('\n');

    print_times_table(12);
    return (0);
}

void print_times_table(int n)
{
    int i,j;
    if (n>0 && n<15)
    {
        for(i = 0; i <= n; i++)
        {
            for(j = 0; j <= n; j++)
            {
                printf("%d", i*j);
                if (i*j < 10)
                {
                    putchar(',');
                    putchar(' ');
                    putchar(' ');
                    putchar(' ');
                }
                else if(i*j < 100)
                {
                    putchar(',');
                    putchar(' ');
                    putchar(' ');
                }
                else
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }
}
