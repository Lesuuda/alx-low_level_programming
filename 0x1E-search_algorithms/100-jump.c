#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, m, x;

	if (array == NULL)
		return (-1);

	m = sqrt(size);
	i = 0;
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	while (array[m] <= value && m < size)
	{
		i = m;
		m += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, m);
	for (x = i; x < size && x <= m; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
