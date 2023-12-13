#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, m, beg = 0, end = size - 1;

	if (!array)
		return (-1);

	while (beg <= end)
	{
		printf("Searching in array:");
		for (i = beg; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i != end)
				printf(", ");
		}
		printf("\n");

		m = (beg + end) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			end = m - 1;
		else
			beg = m + 1;
	}
	return (-1);
}
