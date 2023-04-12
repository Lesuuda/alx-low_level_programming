#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make agrid
 * @width: input width
 * @height: input height
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **test;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	test = malloc(sizeof(int *) * height);
	if (test == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		test[x] = malloc(sizeof(int) * width);
		if (test[x] == NULL)
		{
			for (x = 0; x >= 0; x--)
				free(test[x]);
			free(test);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			test[x][y] = 0;
	}
	return (test);
}

