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

	while (*haystack == *needle && *haystack != '\0')

	if (*needle == '\0')

		return (haystack);

	return (0);
}
