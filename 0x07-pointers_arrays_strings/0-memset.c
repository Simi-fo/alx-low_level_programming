#include "main.h"

/**
 * _memset - fills memory area with constant byte b
 * @s: address of memory area to be filled
 * @b: desired constant byte value
 * @n: number of bytes to be changed
 * Return: modified array with updated value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}

	return (s);
}
