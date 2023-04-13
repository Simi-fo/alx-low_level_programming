#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: input
 * @height: input
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
