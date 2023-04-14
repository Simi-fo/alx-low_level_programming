#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
	{
	a = 0;
	}

	else
	{
	for (a = 0; s1[a]; a++)
	;
	}

	if (s2 == NULL)
	{
	b = 0;
	}

	else
	{
	for (b = 0; s2[b]; ++b)
	;
	}

	if (b > n)
	b = n;
	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)
	return (NULL);

	for (c = 0; a > c; c++)
	s[c] = s1[c];
	for (c = 0; b > c; c++)
	s[c + a] = s2[c];
	s[a + b] = '\0';

	return (s);
}
