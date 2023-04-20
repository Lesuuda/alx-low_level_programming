#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function to determine the index in an array
 * @array: pointer to array
 * @size: size of the array
 * @cmp:  pointer to the function used to conpare values
 * Return: -1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);

}

