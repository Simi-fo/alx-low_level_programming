#include "main.h"

/**
 * _strstr - function that finds the occursnce of a
 * substring in a string
 * @haystack: string input
 * @needle: substring input
 * Return: beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

	while (*a == *b && *a != '\0')
	{
		a++;
		b++;
	}
	if (*b == '\0')
	return (haystack);
	}
	return (0);
}
