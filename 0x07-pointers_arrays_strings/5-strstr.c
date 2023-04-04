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

		char *n = needle;
		char *h = haystack;

	while (*h == *n && *h != '\0')
	{
		h++;
		n++;
	}

	if (*p == '\0')

		return (haystack);
}
