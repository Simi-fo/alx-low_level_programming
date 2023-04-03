#include "main.h"

/**
 * _memcpy - a function which copies the memory area
 * @dest: the memory area where the bytes are stored
 * @src: memory area from which the bytes are copied from
 * @n: number of bytes to be copied
 * Return: the copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int j = n;

	for (; m < j; m++)
	{
	dest[m] = src[m];

	n--;
	}

	return (dest);
}
