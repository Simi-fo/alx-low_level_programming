#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 * If malloc fails, normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *allc;

	allc = malloc(b);
	if (allc == NULL)
	{
	printf("Error: malloc failed\n");
	exit(98);
	}

	return (allc);
}
