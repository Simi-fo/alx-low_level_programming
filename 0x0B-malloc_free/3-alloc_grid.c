#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: the width of array
 * @height: the height of array
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **tda;
	int h;
	int w;

	if (width <= 0 && height <= 0)
	return (NULL);

	tda = malloc(sizeof(int *) * height);

	if (tda == NULL)
	return (NULL);

	for (h = 0; h < height; h++)
	{
	tda[h] = malloc(sizeof(int) * width);

	if (tda[h] == NULL)
	{
		for (; h >= 0; h--)
		free(tda[h]);

	free(tda);
	return (NULL);
	}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		tda[h][w] = 0;
	}
	return (tda);
}
