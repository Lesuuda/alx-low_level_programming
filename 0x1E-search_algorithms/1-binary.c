#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int r, m, l;
	int i;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		m = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
		if (array[i] != value)
			return (-1);

	}
	return (-1);
}


