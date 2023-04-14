#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int y, z = new_size;
	char *oldx = ptr;

	if (ptr == NULL)
	{
	x = malloc(new_size);
	return (x);
	}

	else if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	else if (new_size == old_size)
	return (ptr);
	x = malloc(new_size);

	if (x == NULL)
	return (NULL);

	if (new_size > old_size)
	z = old_size;

	for (y = 0; y < z; y++)
	x[y] = oldx[y];
	free(ptr);

	return (x);
}
