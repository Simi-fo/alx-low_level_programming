#include "main.h"

/**
 * _strlen_recursion - function that returns a length of a string
 * @s: input
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
	length++;
	length += _strlen_recursion(s + 1);
	}

	return (length);
}
