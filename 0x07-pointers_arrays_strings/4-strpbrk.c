#include "main.h"

/**
 * _strpbrk - searches a string for a set of characters
 * @s: input
 * @accept: input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
	for (j = 0; accept[j]; j++)
	{
	if (*s == accept[j])
		return (s);
	}
	s++;
	}

	return ('\0');
}
