#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *cct;
	int x;
	int y;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	x = y = 0;

	while (s1[x] != '\0')
	x++;

	while (s2[y] != '\0')
	y++;

	cct = malloc(sizeof(char) * (x + y + 1));

	if (cct == NULL)
		return (NULL);

	x = y = 0;

	while (s1[x] != '\0')
	{
		cct[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		cct[x] = s2[y];
		x++, y++;
	}

	cct[x] = '\0';
	return (cct);
}
