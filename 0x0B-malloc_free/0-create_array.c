#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * of chars
 * @size: input
 * @c: input
 * Return: 0 if succesful, null if size is equals to 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int y = 0;
	char *x;

	if (size == 0)
	{
	return (NULL);
	}

	x = (char *)malloc(size * sizeof(char));

	if (x == NULL)
	{
	return (NULL);
	}

	while (y < size)
	{
	x[y] = c;
	y++;
	}

	return (x);
}
