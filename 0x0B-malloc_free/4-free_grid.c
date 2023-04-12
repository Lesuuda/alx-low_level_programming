#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees space allocated to 2D array
 * @grid: 2D arrray
 * @height: height of grid
 * Return: VOID
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
