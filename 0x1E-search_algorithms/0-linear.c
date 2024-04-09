#include<stdio.h>
/**
 * linear_search - performs linear search algorithm on the array
 * @array: pointer to the first element of the array to be searched
 * @size: size of the array
 * @value: the value to searched for
 * Return: index of the array if found and -1 if not
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (array[i]);
		}
	}
	return (-1);
}
