#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: input
 * @c: the character to be found
 * Return: 0 if the character is found or NULL if the
 * character is not found
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
	if (s[j] == c)
	{
		return (&s[j]);
	}
	}

	return (0);
}
