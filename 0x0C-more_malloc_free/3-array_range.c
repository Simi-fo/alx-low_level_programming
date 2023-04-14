#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of value
 * @max: maximum range of value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pnt;
	int x, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	pnt = malloc(sizeof(int) * size);

	if (pnt == NULL)
	return (NULL);

	for (x = 0; min <= max; x++)
	pnt[x] = min++;

	return (pnt);
}
