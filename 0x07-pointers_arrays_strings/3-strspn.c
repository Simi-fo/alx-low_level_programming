#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to find the prefix substring in
 * @accept: the string which contains the bytes to be accepted in s
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int p;

	for (j = 0; s[j]; j++)
	{
	for (p = 0; accept[p]; p++)
	{
		if (s[j] == accept[p])
	{
		break;
	}
	}
	if (!accept[p])
	{
		return (j);
	}
	}

	return (j);
}
