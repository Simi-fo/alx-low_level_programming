#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: allocates memory for array
 * @size: input
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 && size == 0)
	return (NULL);

	x = malloc(nmemb * size);

	if (x == NULL)
	return (NULL);

	for (y = 0; (nmemb * size) > y; y++)
	x[y] = 0;

	return (x);
}
