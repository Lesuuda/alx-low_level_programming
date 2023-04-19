#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - repeats an array
 * @array: pointef to array
 * @size: sizeof array
 * @action: pointer to a function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
